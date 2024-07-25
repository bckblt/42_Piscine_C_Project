/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakarabu <bakarabu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:06:33 by bakarabu          #+#    #+#             */
/*   Updated: 2024/07/10 17:25:08 by bakarabu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = str[0] - 32;
		}
		else if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122)
			&& (str[i] < 48 || str[i] > 57))
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}

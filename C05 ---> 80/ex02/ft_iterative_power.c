/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakarabu <bakarabu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 22:37:14 by bakarabu          #+#    #+#             */
/*   Updated: 2024/07/16 10:51:20 by bakarabu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power > 1)
	{
		i *= nb;
		power--;
	}
	return (i);
}

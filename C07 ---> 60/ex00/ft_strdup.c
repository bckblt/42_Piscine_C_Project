/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakarabu <bakarabu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:30:00 by bakarabu          #+#    #+#             */
/*   Updated: 2024/07/20 17:58:08 by bakarabu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char	*src)
{
	int		len;
	int		i;
	char	*dest;

	i = 0;
	len = 0;
	while (src[len] != 0)
		len++;
	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

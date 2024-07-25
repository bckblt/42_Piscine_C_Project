/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakarabu <bakarabu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:52:05 by bakarabu          #+#    #+#             */
/*   Updated: 2024/07/20 20:05:39 by bakarabu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*x;

	if (min >= max)
		return (0);
	range = max - min;
	x = malloc(range * sizeof(int));
	if (!x)
		return (0);
	i = 0;
	while (i < range)
	{
		x[i] = min + i;
		i++;
	}
	return (x);
}

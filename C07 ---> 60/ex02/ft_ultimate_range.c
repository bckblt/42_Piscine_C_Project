/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakarabu <bakarabu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:18:32 by bakarabu          #+#    #+#             */
/*   Updated: 2024/07/20 20:04:55 by bakarabu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	y;
	int	*x;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	y = max - min;
	x = malloc(y * sizeof(int));
	if (!x)
	{
		*range = 0;
		return (-1);
	}
	*range = x;
	while (i < y)
	{
		x[i] = min + i;
		i++;
	}
	return (y);
}

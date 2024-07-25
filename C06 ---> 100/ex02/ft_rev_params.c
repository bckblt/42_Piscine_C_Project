/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakarabu <bakarabu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:54:40 by bakarabu          #+#    #+#             */
/*   Updated: 2024/07/17 21:03:12 by bakarabu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	ac -= 1;
	while (av[ac][i] != 0 && ac > 0)
	{
		write(1, &av[ac][i], 1);
		i++;
		if (av[ac][i] == 0)
		{
			write(1, "\n", 1);
			i = 0;
			ac--;
		}
	}
}

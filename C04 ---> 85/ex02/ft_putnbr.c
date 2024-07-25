/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakarabu <bakarabu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 04:14:20 by bakarabu          #+#    #+#             */
/*   Updated: 2024/07/14 14:08:54 by bakarabu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < 10)
			ft_putchar(nb + '0');
		else
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
}

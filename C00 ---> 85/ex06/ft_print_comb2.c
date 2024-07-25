/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakarabu <bakarabu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 07:09:13 by bakarabu          #+#    #+#             */
/*   Updated: 2024/07/03 12:24:01 by bakarabu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write (1, &x, 1);
}

void	abc(int a, int b)
{
	ft_putchar ((a / 10) + 48);
	ft_putchar ((a % 10) + 48);
	write (1, " ", 1);
	ft_putchar ((b / 10) + 48);
	ft_putchar ((b % 10) + 48);
	if (a != 98)
		write (1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			abc (a, b);
			b++;
		}
		a++;
	}
}

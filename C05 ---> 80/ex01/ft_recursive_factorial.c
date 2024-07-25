/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakarabu <bakarabu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 20:11:54 by bakarabu          #+#    #+#             */
/*   Updated: 2024/07/16 10:51:24 by bakarabu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
		result *= nb * ft_recursive_factorial(nb - 1);
	if (nb < 0)
		return (0);
	return (result);
}

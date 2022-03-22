/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:31:45 by otoufah           #+#    #+#             */
/*   Updated: 2021/10/10 17:08:37 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	rslt;

	rslt = 1;
	if (nb < 0)
		return (0);
	while (nb >= 1)
	{
		rslt = rslt * nb;
		nb--;
	}
	return (rslt);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 12:26:05 by otoufah           #+#    #+#             */
/*   Updated: 2021/10/12 12:57:09 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (nb == 2147483647)
		return (1);
	if (nb <= 1)
		return (0);
	while (x++ <= nb / 2)
	{
		if (nb % x == 0)
			return (0);
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (ft_is_prime(nb) == 0)
	{
		ft_is_prime(nb);
		nb++;
	}
	return (nb);
}

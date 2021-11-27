/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:48:16 by otoufah           #+#    #+#             */
/*   Updated: 2021/10/10 17:10:39 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	once;

	i = 0;
	once = 1;
	if (power < 0)
		return (0);
	while (i++ < power)
	{
		once = once * nb;
	}
	return (once);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:48:40 by otoufah           #+#    #+#             */
/*   Updated: 2021/10/10 17:11:42 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	once;

	once = 1;
	if (power < 0)
		return (0);
	if (power > 0)
		once = nb * ft_recursive_power(nb, power - 1);
	return (once);
}

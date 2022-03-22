/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:15:12 by otoufah           #+#    #+#             */
/*   Updated: 2021/10/12 10:21:25 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int	ft_sqrt(int nb)
{
	unsigned int	i;
	unsigned int	nbr;

	nbr = nb;
	i = 1;
	if (nb == 0)
	{
		return (0);
	}
	while (i * i < nbr)
		i++;
	if ((i * i) == nbr)
		return (i);
	else
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:04:43 by otoufah           #+#    #+#             */
/*   Updated: 2021/09/27 18:25:10 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{	
	char	Positive;
	char	Negative;

	Positive = 'P';
	Negative = 'N';
	if (n >= 0)
	{
		write (1, &Positive, 1);
	}
	else
	{
		write (1, &Negative, 1);
	}
}

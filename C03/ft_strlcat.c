/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:47:01 by otoufah           #+#    #+#             */
/*   Updated: 2021/10/14 19:47:13 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	rslt;

	a = 0;
	b = 0;
	rslt = 0;
	while (dest[a])
		a++;
	while (src[rslt])
		rslt++;
	if (size <= a)
		rslt = rslt + size;
	else
		rslt = rslt + a;
	while (src[b] && (a + 1) < size)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (rslt);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:50:33 by otoufah           #+#    #+#             */
/*   Updated: 2021/10/13 17:33:11 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	if (to_find[0] == '\0')
		return (str);
	a = 0;
	while (str[a] != '\0')
	{
		b = 0;
		while (to_find[b] != '\0')
		{
			if (str[a + b] != to_find[b])
				break ;
			b++;
		}
		if (to_find[b] == '\0')
			return (str + a);
		a++;
	}
	return (0);
}

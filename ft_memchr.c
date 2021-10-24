/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malton <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 13:32:42 by malton            #+#    #+#             */
/*   Updated: 2021/10/24 14:38:50 by malton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*p;
	char	*o;

	o = (char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)o[i] == (unsigned char)c)
		{
			p = &o[i];
			return ((void *)p);
		}
		i++;
	}
	return ((void *)0);
}

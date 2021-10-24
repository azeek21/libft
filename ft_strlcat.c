/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malton <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:58:10 by malton            #+#    #+#             */
/*   Updated: 2021/10/09 14:58:58 by malton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	n;
	size_t	i;
	size_t	f;

	i = 0;
	f = 0;
	f = ft_strlen(dst);
	if (dstsize <= f)
		return (dstsize + ft_strlen(src));
	n = f;
	while (src[i] && (n) < dstsize - 1)
	{
		dst[n] = src[i];
		i++;
		n++;
	}
	dst[n] = '\0';
	return (f + ft_strlen(src));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malton <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:57:35 by malton            #+#    #+#             */
/*   Updated: 2021/10/09 14:57:53 by malton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	n;
	size_t	src_len;
	char	c;

	src_len = 0;
	c = src[0];
	if (src[0] == '\0')
	{
		dst[0] = '\0';
		return (0);
	}
	while (src[src_len] != '\0')
	{
		++src_len;
	}
	if (dstsize == 0)
		return (src_len);
	n = 0;
	while ((n < dstsize - 1) && (src[n] != '\0'))
	{
		dst[n] = src[n];
		n++;
	}
	dst[n] = '\0';
	return (src_len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malton <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:56:59 by malton            #+#    #+#             */
/*   Updated: 2021/10/12 16:28:29 by malton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*mdst;
	const unsigned char	*msrc;
	size_t				n;

	if (!src && !dst)
		return (dst);
	mdst = (unsigned char *)dst;
	msrc = (unsigned char *)src;
	n = 0;
	if (msrc < mdst)
	{
		while (++n <= len)
			mdst[len - n] = msrc[len - n];
	}
	else
	{
		while (len-- > 0)
			*(mdst++) = *(msrc++);
	}
	return (dst);
}

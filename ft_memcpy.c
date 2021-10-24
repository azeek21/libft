/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malton <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:56:26 by malton            #+#    #+#             */
/*   Updated: 2021/10/09 14:56:49 by malton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*mydst;
	unsigned char	*mysrc;
	size_t			i;

	mydst = (unsigned char *)dst;
	mysrc = (unsigned char *)src;
	i = 0;
	if (!n || dst == src)
		return (dst);
	while (i < n)
	{
		mydst[i] = mysrc[i];
		i++;
	}
	return (dst);
}

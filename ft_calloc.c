/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malton <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:41:38 by malton            #+#    #+#             */
/*   Updated: 2021/10/12 13:27:07 by malton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*p;

	i = 0;
	if ((count == 0) || (size == 0))
	{
		p = (void *)malloc(0);
		return ((void *)p);
	}
	p = (void *)malloc(size * count);
	if (p)
	{
		while (i < (count * size))
		{
			p[i] = 0;
			i++;
		}
		return ((void *)p);
	}
	return ((void *)0);
}

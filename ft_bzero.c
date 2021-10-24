/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malton <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:55:55 by malton            #+#    #+#             */
/*   Updated: 2021/10/12 15:35:48 by malton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ch;
	size_t	i;

	ch = (char *)s;
	i = 0;
	if (n == 0)
		return ;
	else
	{
		while (i < n)
		{
			ch[i] = '\0';
			i++;
		}
	}
	return ;
}
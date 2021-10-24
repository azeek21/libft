/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malton <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:55:09 by malton            #+#    #+#             */
/*   Updated: 2021/10/24 14:41:18 by malton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	f;

	f = 0;
	while (s[f] != '\0')
	{
		if ((unsigned char)s[f] == (unsigned char)c)
		{
			return ((char *)&s[f]);
		}
		f++;
	}
	if ((unsigned char)s[f] == (unsigned char)c)
	{
		return ((char *)&s[f]);
	}
	return ((void *)0);
}

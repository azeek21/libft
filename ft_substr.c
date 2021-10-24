/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malton <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 13:50:44 by malton            #+#    #+#             */
/*   Updated: 2021/10/22 17:04:05 by malton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			f;
	char			*p;

	if (!s)
		return ((void *)0);
	f = 0;
	i = ft_strlen(s);
	if (i - start <= len)
		p = (char *)malloc(sizeof(char) * (i - start) + 1);
	else
		p = (char *)malloc(sizeof(char) * len + 1);
	if (!p)
		return ((void *)0);
	while ((start <= i) && (f < len) && (s[start]))
		p[f++] = s[start++];
	p[f] = '\0';
	return (p);
}

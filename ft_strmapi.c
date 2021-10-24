/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malton <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:07:58 by malton            #+#    #+#             */
/*   Updated: 2021/10/22 16:55:00 by malton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*r;

	i = 0;
	if (!s || !f)
		return ((void *)0);
	while (s[++i] != '\0')
		;
	r = (char *)malloc(sizeof(char) * (i + 1));
	if (!r)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		r[i] = (*f)(i, s[i]);
		i++;
	}
	r[i] = '\0';
	return (r);
}

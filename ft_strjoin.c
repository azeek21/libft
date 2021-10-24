/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malton <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:47:30 by malton            #+#    #+#             */
/*   Updated: 2021/10/17 16:02:20 by malton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	int		full;
	char	*p;

	if (!s1 || !s2)
		return ((void *)0);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	full = len1 + len2 + 1;
	p = (char *)malloc(full * sizeof(char));
	if (!p)
		return ((void *)0);
	ft_strlcpy(p, s1, len1 + 1);
	ft_strlcat(p, s2, full);
	return (p);
}

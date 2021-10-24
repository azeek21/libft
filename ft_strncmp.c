/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malton <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:03:55 by malton            #+#    #+#             */
/*   Updated: 2021/10/10 13:26:24 by malton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char*s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ms1;
	unsigned char	*ms2;

	ms1 = (unsigned char *)s1;
	ms2 = (unsigned char *)s2;
	i = 0;
	if (ms1[0] == '\0' && ms2[0] != '\0')
		return (-1);
	if (n == 0)
		return (0);
	while ((i < n - 1) && (ms1[i] != '\0'))
	{
		if (ms1[i] != ms2[i])
			return ((unsigned char)ms1[i] - (unsigned char)ms2[i]);
		i++;
	}
	if (ms1[i] != ms2[i])
		return ((unsigned char)ms1[i] - (unsigned char)ms2[i]);
	return (0);
}

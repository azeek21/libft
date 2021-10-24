/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malton <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:05:15 by malton            #+#    #+#             */
/*   Updated: 2021/10/24 14:32:22 by malton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t		i;
	size_t		f;
	char		c;
	const char	*result;

	i = ft_strlen(needle);
	if (i == 0)
		return ((char *)haystack);
	i = 0;
	while ((haystack[i] != '\0') && (i < n))
	{
		c = haystack[i];
		f = 0;
		if (c == needle[f])
		{
			result = &haystack[i];
			while ((c == needle[f]) && (needle[f] != '\0') && ((i + f) < n)
				&& (f++ >= 0))
				c = haystack[i + f];
			if (needle[f] == '\0')
				return ((char *)result);
		}
		i++;
	}
	return ((void *)0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malton <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:47:36 by malton            #+#    #+#             */
/*   Updated: 2021/10/24 15:19:22 by malton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*copy_s;
	int		counter;

	copy_s = (char *)s;
	counter = 0;
	while (copy_s[counter] != '\0')
		counter++;
	while ((unsigned char)copy_s[counter] != (unsigned char)c && (counter > 0))
		counter--;
	if ((unsigned char)copy_s[counter] == (unsigned char)c)
		return ((char *)&copy_s[counter]);
	return ((void *)0);
}

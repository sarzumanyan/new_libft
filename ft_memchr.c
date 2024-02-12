/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soarzuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:06:57 by soarzuma          #+#    #+#             */
/*   Updated: 2024/02/12 18:10:51 by soarzuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	char			*str;
	unsigned char	d;

	d = c;
	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((char)str[i] == (char)d)
			return (str + i);
		i++;
	}
	return (NULL);
}

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

void	*memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (*(unsigned char *) s[i] != (unsigned char *)c && i < n)
		i++;
	if (i == n)
		return (NULL);
	return ((unsigned char *) s[i]);
}

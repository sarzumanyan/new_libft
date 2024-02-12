/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soarzuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:54:33 by soarzuma          #+#    #+#             */
/*   Updated: 2024/02/12 16:03:34 by soarzuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*s_pointer;

	i = 0;
	while (s[i] != '\0')
		i++;
	s_pointer = (char *)malloc((i + 1) * sizeof(*s));
	if (s_pointer == NULL)
		return (0);
	else
	{
		i = 0;
		while (s[i] != '\0')
		{
			s_pointer[i] = s[i];
			i++;
		}
		s_pointer[i] = '\0';
		return (s_pointer);
	}
}

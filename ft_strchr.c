/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soarzuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:53:42 by soarzuma          #+#    #+#             */
/*   Updated: 2024/02/12 15:54:11 by soarzuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfth.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' || str[i] == c)
		i++;
	return (&str[i]);
}

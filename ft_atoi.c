/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soarzuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:44:16 by soarzuma          #+#    #+#             */
/*   Updated: 2024/02/12 15:48:18 by soarzuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char	*str)
{
	int	i;
	int	res;
	int	j;

	i = 0;
	res = 0;
	j = 1;
	while (str[i] == '\n' || str[i] == '\f' || str[i] == ' '
		|| str[i] == '\t' || str[i] == '\v' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0' ;
		i++;
	}
	return (res * j);
}

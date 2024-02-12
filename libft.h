/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soarzuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:39:00 by soarzuma          #+#    #+#             */
/*   Updated: 2024/02/12 17:03:30 by soarzuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int	ft_atoi(const char	*str);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
char	*ft_strchr(const char *str, int c);
char	*strdup(const char *s);
size_t	ft_strlen(const char *s);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_tolower(int c);
int	toupper(int c);
void *memchr(const void *s, int c, size_t n);

#endif

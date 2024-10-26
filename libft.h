/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulutas <eulutas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:07:29 by eulutas           #+#    #+#             */
/*   Updated: 2024/10/26 17:24:28 by eulutas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include "stdio.h"
#include "stdlib.h"
char *ft_substr(char const *s, unsigned int start, size_t len);
int ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t count, size_t size);
int ft_toupper(int c);
int ft_isalnum(int c);
char *ft_strdup(const char *str);
char *ft_strchr(const char *str, int c);
int ft_tolower(int c);
char *ft_strrchr(const char *s, int c);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int ft_strncmp(const char *str1, const char *str2, size_t n);
size_t ft_strlen(const char *s);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
size_t ft_strlcat(char *dest, const char *src, size_t size);
char *ft_strjoin(char const *s1, char const *s2);
void *ft_memset(void *dest, int c, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memcpy(void *dest, const void *src, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_isprint(int c);
int ft_isdigit(int c);
int ft_isascii(int c);
int ft_isalpha(int c);
#endif
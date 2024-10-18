/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulutas <eulutas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:43:33 by eulutas           #+#    #+#             */
/*   Updated: 2024/10/16 11:43:33 by eulutas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s,int c, size_t n)
{
	unsigned char *str;
	str = (unsigned char *)s;
	for (size_t i = 0; i < n; i++)
	{
		if((int)str[i]==c)
			return((str+i));		
	}
	return (0);
	
}
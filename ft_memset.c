/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulutas <eulutas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:35:29 by eulutas           #+#    #+#             */
/*   Updated: 2024/10/16 11:35:29 by eulutas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *memset(void *dest, int c, size_t n)
{
	unsigned char *str;
	str = (unsigned char *)dest;
	while (n > 0)
	{
		str[n-1] = c;
		n--;
	}
	return (str);
	
}
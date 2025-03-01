/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulutas <eulutas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:41:01 by eulutas           #+#    #+#             */
/*   Updated: 2025/03/01 16:41:01 by eulutas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tmp;

	if (!new)
		return;
	if (!(*lst))
	{
		*lst = new;
		return;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}
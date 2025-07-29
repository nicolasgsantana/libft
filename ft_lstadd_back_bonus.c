/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-sant <nde-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 12:25:49 by nde-sant          #+#    #+#             */
/*   Updated: 2025/07/28 13:23:12 by nde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current_node;
	
	if (!*lst)
		*lst = new;
	else
	{
		current_node = *lst;
		while (current_node -> next)
			current_node = current_node -> next;
		current_node -> next = new;
	}
}

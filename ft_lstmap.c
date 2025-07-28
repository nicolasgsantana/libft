/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-sant <nde-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 16:46:52 by nde-sant          #+#    #+#             */
/*   Updated: 2025/07/28 18:08:27 by nde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current_node;
	t_list	*next_node;

	current_node = lst;
	while (current_node)
	{
		next_node = current_node -> next;
		f(current_node -> content);
		if (!current_node -> content)
		{
			del(current_node);
			free(current_node);
		}
		current_node = next_node;
	}
	return (lst);
}

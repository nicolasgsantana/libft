/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-sant <nde-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 11:31:58 by nde-sant          #+#    #+#             */
/*   Updated: 2025/07/16 10:32:43 by nde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*dest;
	unsigned int	i;

	dest = ptr;
	i = 0;
	while (i < n)
		dest[i++] = c;
	return (dest);
}

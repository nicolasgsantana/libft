/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-sant <nde-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:58:21 by nde-sant          #+#    #+#             */
/*   Updated: 2025/07/16 11:29:24 by nde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		temp[n];
	const unsigned char	*s;
	size_t	i;

	s = src;
	i = 0;
	while (i < n)
	{
		temp[i] = s[i];
		i++;
	}
	ft_memcpy(dest, temp, n);
	return (dest);
}

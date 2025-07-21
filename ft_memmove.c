/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-sant <nde-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:58:21 by nde-sant          #+#    #+#             */
/*   Updated: 2025/07/21 16:31:17 by nde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = dest;
	s = src;
	i = 0;
	if (d == s)
		return (dest);
	else if (d < s)
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	else
		while (i < n)
		{
			i++;
			d[n-i] = s[n-i];
		}
	return ((void *)d);
}

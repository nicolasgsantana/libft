/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-sant <nde-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 11:31:58 by nde-sant          #+#    #+#             */
/*   Updated: 2025/07/15 14:00:27 by nde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *ptr, int c, unsigned int n)
{
	unsigned char	*dest;
	unsigned int	i;

	dest = ptr;
	i = 0;
	while (i < n)
		dest[i++] = c;
	return (dest);
}

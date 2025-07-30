/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-sant <nde-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 12:01:18 by nde-sant          #+#    #+#             */
/*   Updated: 2025/07/30 10:16:41 by nde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (len > ft_strlen(s))
		len = ft_strlen(s);
	i = 0;
	substr = malloc((len + 1) * sizeof(char));
	if (!substr)
		return (0);
	if (ft_strlen(s) > start)
	{
		while (s[start + i] != '\0' && i < len)
		{
			substr[i] = s[start + i];
			i++;
		}
	}
	substr[i] = '\0';
	return (substr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-sant <nde-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:40:00 by nde-sant          #+#    #+#             */
/*   Updated: 2025/07/17 18:48:30 by nde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	last_found_index;

	last_found_index = -1;
	i = 0;
	while (s[i] != '\0')
		if (s[i] == c)
			last_found_index = i;
	if (last_found_index != -1)
		return (&s[last_found_index]);
	return (NULL);
}

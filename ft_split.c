/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-sant <nde-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:26:28 by nde-sant          #+#    #+#             */
/*   Updated: 2025/07/24 13:15:05 by nde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(char *str);

static int	ft_count_strings(char const *str, char delimiter)
{
	int	i;
	int	count;
	
	i = 0;
	count = 0;
	if(delimiter == 0)
		return(1);
	while (str[i])
	{
		if (i == 0 && str[i] == delimiter)
		{
			if (str[i+1]!=delimiter)
				count++;
			i++;
			continue;
		}
		else if (str[i] == delimiter && str[i+1] != delimiter && str[i+1])
			count++;
		i++;
	}
	return (count);
}

static char	*get_index_str(char const *str, char delimiter, int index)
{
	int	i;
	int	current_index;
	int	str_len;
	char	*new_str;

	current_index = -1;
	i = 0;
	str_len = 0;
	while (str[i])
	{
		if (str[i] == delimiter && str[i+1] != delimiter && str[i+1])
			current_index++;
		if (str[i] != delimiter && current_index == index)
		{
			str_len++;
			if (str[i+1] == delimiter || !str[i+1])
				break;
		}
		i++;
	}
	new_str = malloc(str_len + 1 * sizeof(char));
	if(!new_str)
		return (NULL);
	ft_strlcpy(new_str, &str[i - str_len + 1], str_len + 1);
	return (new_str);
}

static void	free_all(char **array)
{
	int	i;

	i = 0;
	while(array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array);
	array = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		array_size;

	array_size = ft_count_strings(s, c) + 1;
	array = malloc(array_size * sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	while(i < array_size - 1)
	{
		array[i] = get_index_str(s, c, i);
		if (array[i] == NULL)
			free_all(array);
		i++;
	}
	array[i] = NULL;
	return (array);
}

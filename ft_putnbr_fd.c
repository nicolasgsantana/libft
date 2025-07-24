/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-sant <nde-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 12:04:23 by nde-sant          #+#    #+#             */
/*   Updated: 2025/07/24 13:36:07 by nde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putstr_fd(char *s, int fd);
char	*ft_itoa(int n);

void	ft_putnbr_fd(int n, int fd)
{
	char	*converted_n;

	converted_n = ft_itoa(n);
	ft_putstr_fd(converted_n, fd);
	free(converted_n);
}

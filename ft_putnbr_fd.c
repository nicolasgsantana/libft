/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-sant <nde-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 12:04:23 by nde-sant          #+#    #+#             */
/*   Updated: 2025/07/23 12:22:51 by nde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_fd(char *s, int fd);
char	*ft_itoa(int n);

void	ft_putnbr_fd(int n, int fd)
{
	ft_putstr_fd(ft_itoa(n), fd);
}

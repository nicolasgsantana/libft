/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-sant <nde-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:52:23 by nde-sant          #+#    #+#             */
/*   Updated: 2025/07/15 19:04:38 by nde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c);

static int	ft_islower(int c)
{
	return (c >= 97 && c <= 122);
}

int	ft_toupper(int c)
{
	if (ft_isalpha(c) == 0)
		return (c);
	else if (ft_islower(c) == 0)
		return (c);
	return (c + 32);
}

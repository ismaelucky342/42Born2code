/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char2bin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 09:35:46 by ismherna          #+#    #+#             */
/*   Updated: 2024/06/10 14:58:29 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_char2bin(unsigned char c, char *ret, size_t *j)
{
	int		k;

	k = 7;
	while (k >= 0)
	{
		if (c & (1 << k))
			ret[*j] = '1';
		else
			ret[*j] = '0';
		(*j)++;
		k--;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassafe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:41:46 by iassafe           #+#    #+#             */
/*   Updated: 2022/11/06 15:57:11 by iassafe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp( const void *pointer1, const void *pointer2, size_t size )
{
	unsigned char	*u1;
	unsigned char	*u2;
	size_t			i;

	i = 0;
	u1 = (unsigned char *)pointer1;
	u2 = (unsigned char *)pointer2;
	while (size > i)
	{
		if (u1[i] != u2[i])
			return (u1[i] - u2[i]);
		i++;
	}
	return (0);
}

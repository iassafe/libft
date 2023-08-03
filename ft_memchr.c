/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassafe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:49:12 by iassafe           #+#    #+#             */
/*   Updated: 2022/10/21 15:36:47 by iassafe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr( const void *mem, int c, size_t size)
{
	unsigned char	*d;
	size_t			i;

	i = 0;
	d = (unsigned char *)mem;
	while (i < size)
	{
		if (d[i] == (unsigned char)c)
			return (d + i);
		i++;
	}
	return (0);
}

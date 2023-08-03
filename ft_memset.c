/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassafe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:42:01 by iassafe           #+#    #+#             */
/*   Updated: 2022/10/20 11:06:36 by iassafe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t			i;
	unsigned char	*d;

	i = 0;
	d = (unsigned char *)str;
	while (i < len)
	{
		d[i] = (unsigned char )c;
		i++;
	}
	return (str);
}

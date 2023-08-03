/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassafe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:32:48 by iassafe           #+#    #+#             */
/*   Updated: 2022/11/10 10:55:03 by iassafe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*s1;
	char	*s2;
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	s1 = (char *)src;
	s2 = (char *)dst;
	while (n > i)
	{
		s2[i] = s1[i];
		i++;
	}
	return (dst);
}

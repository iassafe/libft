/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassafe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:13:23 by iassafe           #+#    #+#             */
/*   Updated: 2022/11/05 12:08:47 by iassafe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dst_ptr;
	char	*src_ptr;
	size_t	i;

	i = 0;
	if (n == 0 || dst == src)
		return (dst);
	dst_ptr = (char *)dst;
	src_ptr = (char *)src;
	if (dst < src)
	{
		ft_memcpy(dst, src, n);
	}
	else
	{
		while (n > 0)
		{
			dst_ptr[n - 1] = src_ptr[n - 1];
			n--;
		}
	}
	return (dst);
}

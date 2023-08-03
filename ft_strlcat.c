/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassafe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:48:32 by iassafe           #+#    #+#             */
/*   Updated: 2022/11/04 19:10:33 by iassafe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	len_src = ft_strlen(src);
	if (!dst && !size)
		return (len_src);
	len_dest = ft_strlen(dst);
	if (size <= len_dest)
		return (len_src + size);
	if (size == 0)
		return (len_src);
	i = 0;
	while (src[i] != '\0' && i < (size - 1 - len_dest))
	{
		dst[len_dest + i] = src[i];
		i++;
	}
	dst[len_dest + i] = '\0';
	return (len_src + len_dest);
}

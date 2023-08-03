/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassafe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:51:07 by iassafe           #+#    #+#             */
/*   Updated: 2022/11/06 12:09:34 by iassafe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*m;
	unsigned char	*s;
	size_t			i;

	i = 0;
	m = (unsigned char *)s1;
	s = (unsigned char *)s2;
	while ((m[i] || s[i]) && (i < n))
	{
		if (m[i] != s[i])
		{
			return (m[i] - s[i]);
		}
		i++;
	}
	return (0);
}

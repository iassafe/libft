/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassafe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:38:44 by iassafe           #+#    #+#             */
/*   Updated: 2022/11/06 12:49:59 by iassafe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	l;

	l = 0;
	if (!s)
		return (NULL);
	if (start <= ft_strlen(s))
		l = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		start = 0;
	if (len < l)
		l = len;
	str = (char *)malloc(sizeof(char) * (l + 1));
	if (!str)
		return (0);
	ft_strlcpy (str, s + start, l + 1);
	return (str);
}

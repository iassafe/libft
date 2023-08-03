/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassafe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:12:00 by iassafe           #+#    #+#             */
/*   Updated: 2022/11/05 12:35:55 by iassafe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		len;
	char	*t;

	i = 0;
	len = ft_strlen(src);
	t = (char *)malloc(sizeof(char) * (len + 1));
	if (!(t))
		return (NULL);
	while (src[i])
	{
		t[i] = src[i];
		i++;
	}
	t[i] = '\0';
	return (t);
}

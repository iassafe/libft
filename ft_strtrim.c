/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassafe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:48:32 by iassafe           #+#    #+#             */
/*   Updated: 2022/11/09 17:08:45 by iassafe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*l;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	j = ft_strlen(s1);
	while (j != 0)
	{
		if (ft_strchr(set, s1[j]) == 0)
			break ;
		j--;
	}
	k = (j - i) + 1;
	l = ft_substr(s1, i, k);
	return (l);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassafe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:44:46 by iassafe           #+#    #+#             */
/*   Updated: 2022/11/02 17:01:40 by iassafe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	Count, size_t	Size)
{
	void	*t;

	t = malloc(Count * Size);
	if (!t)
		return (NULL);
	ft_bzero(t, (Size * Count));
	return (t);
}

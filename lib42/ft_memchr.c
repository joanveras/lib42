/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveras2 <jveras2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:14:55 by jveras2           #+#    #+#             */
/*   Updated: 2023/10/27 14:34:37 by jveras2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*new_s;

	i = 0;
	new_s = (char *) s;
	while (n--)
	{
		if (new_s[i] == c)
			return (&new_s[i]);
		i++;
	}
	return (NULL);
}

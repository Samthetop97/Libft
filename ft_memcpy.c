/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shadir <shadir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:36:15 by shadir            #+#    #+#             */
/*   Updated: 2023/07/05 01:03:36 by shadir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*destt;
	const char	*srcc;

	destt = dest;
	srcc = src;
	if (dest == NULL && src == NULL && n > 0)
		return (NULL);
	while (n--)
		*destt++ = *srcc++;
	return (dest);
}

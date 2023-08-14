/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shadir <shadir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:41:26 by shadir            #+#    #+#             */
/*   Updated: 2023/07/05 01:03:40 by shadir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c)
	{
		if (!*s++)
		{
			if (s == 0)
			{
				return ((char *) s);
			}
			else
			{
				return (0);
			}
		}
	}
	return ((char *) s);
}

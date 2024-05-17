/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:07:14 by hurabe            #+#    #+#             */
/*   Updated: 2024/05/17 21:01:13 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (dst);
	if (dst != src)
	{
		while (i < n)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}

// void	*ft_memcpy(void *dst, const void *src, size_t n)
// {
// 	char		*dest_char;
// 	const char	*src_char;
// 	size_t		i;

// 	dest_char = (char *)dst;
// 	src_char = (const char *)src;
// 	if (!dst || !src)
// 		return (NULL);
// 	i = 0;
// 	while (i < n)
// 	{
// 		dest_char[i] = src_char[i];
// 		i++;
// 	}
// 	return (dst);
// }
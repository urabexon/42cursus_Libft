/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:08:00 by hurabe            #+#    #+#             */
/*   Updated: 2024/05/08 18:39:50 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	count;
	size_t	result;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	count = 0;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	result = dstsize - dst_len - 1;
	while (src[count] != '\0' && count < result)
	{
		dst[dst_len + count] = src[count];
		count++;
	}
	dst[dst_len + count] = '\0';
	return (dst_len + src_len);
}

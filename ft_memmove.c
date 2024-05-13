/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:07:17 by hurabe            #+#    #+#             */
/*   Updated: 2024/05/13 17:07:22 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dst || !src)
		return (dst);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d < s)
	{
		while (len--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		d += len;
		s += len;
		while (len--)
		{
			*--d = *--s;
		}
	}
	return (dst);
}

// int main(void) 
// {
//     char src1[] = "Hello, world!";
//     char dst1[50];

//     // not duplication
//     ft_memmove(dst1, src1, sizeof(src1));
//     printf("Non-overlapping: %s\n", dst1);

//     char src2[] = "Overlap example: This is a test.";

//     // duplication
//     ft_memmove(src2 + 8, src2, 20);
//     printf("Overlapping: %s\n", src2);

//     return (0);
// }
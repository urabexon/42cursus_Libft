/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:07:11 by hurabe            #+#    #+#             */
/*   Updated: 2024/05/13 18:57:27 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	if (n == 0)
		return (0);
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}

// int main(void) {
//     char str1[] = "Hello, world!";
//     char str2[] = "Hello, world!";
//     char str3[] = "Hello, World!";
//     char str4[] = "Hello";

//     printf("expected: 0, Got: %d\n", ft_memcmp(str1, str2, 13));

//     printf("expected: non-zero, Got: %d\n", ft_memcmp(str1, str3, 13));

//     printf("expected: 0, Got: %d\n", ft_memcmp(str1, str4, 5));

//     char str5[] = "World, Hello!";
//     printf("expected: non-zero, Got: %d\n", ft_memcmp(str1, str5, 13));

//     return (0);
// }
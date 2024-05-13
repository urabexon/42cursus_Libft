/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:07:08 by hurabe            #+#    #+#             */
/*   Updated: 2024/05/13 18:23:29 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

// int main(void) {
//     char str[] = "Hello, world!";
//     char *result;

//     // found
//     result = (char *)ft_memchr(str, 'w', sizeof(str));
//     if (result) {
//         printf("found '%c' at position %ld\n", *result, result - str);
//     } else {
//         printf("Character not found.\n");
//     }

//     // not found
//     result = (char *)ft_memchr(str, 'z', sizeof(str));
//     if (result) {
//         printf("found '%c' at position %ld\n", *result, result - str);
//     } else {
//         printf("Character not found.\n");
//     }

//     // 0
//     result = (char *)ft_memchr(str, 'H', 0);
//     if (result) {
//         printf("found '%c' at position %ld\n", *result, result - str);
//     } else {
//         printf("Character not found.\n");
//     }

//     return (0);
// }
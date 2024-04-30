/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:08:07 by hurabe            #+#    #+#             */
/*   Updated: 2024/04/24 19:22:50 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	t;

	t = 0;
	while (s[t] != '\0')
	{
		t++;
	}
	return (t);
}

// int main() {
//     char *strings[] = {"", "Hello, world!", "Another test string"};
//     for (int i = 0; i < 3; i++) {
//         printf("Length of '%s' is %zu.\n", strings[i], ft_strlen(strings[i]));
//     }
//     return 0;
// }

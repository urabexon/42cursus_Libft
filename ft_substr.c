/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:08:26 by hurabe            #+#    #+#             */
/*   Updated: 2024/05/17 22:06:02 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	sub_len;
	size_t	i;

	if (!s)
		return (NULL);
	sub_len = ft_strlen(s);
	if (sub_len <= start)
	{
		substr = (char *)malloc(1);
		if (substr == NULL)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (sub_len < start + len)
		len = sub_len - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	i = -1;
	while (++i < len && s[start + i])
		substr[i] = s[start + i];
	substr[i] = '\0';
	return (substr);
}

// int main(void) {
//     char const *str = "Hello, World!";
//     char *result;

//     // test1: normal
//     result = ft_substr(str, 7, 5);
//     printf("Test 1: \"%s\"\n", result);
//     free(result);

//     // test2
//     result = ft_substr(str, 20, 5);
//     printf("Test 2: \"%s\"\n", result);
//     free(result);

//     // test3
//     result = ft_substr(str, 7, 20);
//     printf("Test 3: \"%s\"\n", result);
//     free(result);

//     // test4
//     result = ft_substr(NULL, 0, 5);
//     printf("Test 4: \"%s\"\n", result);

//     // test5
//     result = ft_substr(str, 0, 0);
//     printf("Test 5: \"%s\"\n", result);
//     free(result);

//     // test6
//     result = ft_substr(str, 12, 5);
//     printf("Test 6: \"%s\"\n", result);
//     free(result);

// 	// test7
//     result = ft_substr(str, 400, 5);
//     printf("Test 7: \"%s\"\n", result);
//     free(result);

//     return (0);
// }

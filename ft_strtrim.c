/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:08:23 by hurabe            #+#    #+#             */
/*   Updated: 2024/05/13 21:52:47 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_set(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*str;
	const char	*end;
	char		*new;
	size_t		len;

	if (!s1 || !set)
		return (NULL);
	str = s1;
	while (*str && ft_set(*str, set))
		str++;
	end = s1 + ft_strlen(s1);
	while (end > str && ft_set(*(end - 1), set))
		end--;
	len = end - str;
	new = (char *)malloc(len + 1);
	if (!new)
		return (NULL);
	ft_strlcpy(new, str, len + 1);
	return (new);
}

// int main(void) {
//     char *result;

//     // test1
//     result = ft_strtrim("   hello world   ", " ");
//     printf("Result: '%s'\n", result);
//     free(result); 

//     // test2
//     result = ft_strtrim("###example###", "#");
//     printf("Result: '%s'\n", result);
//     free(result);

//     // test3
//     result = ft_strtrim("$$$$$", "$");
//     printf("Result: '%s'\n", result);
//     free(result);

//     // test4
//     result = ft_strtrim("intact", " ");
//     printf("Result: '%s'\n", result);
//     free(result);

//     // test5
//     result = ft_strtrim("", " ");
//     printf("Result: '%s'\n", result);
//     free(result);

//     // test6
//     result = ft_strtrim(NULL, " ");
//     if (result == NULL) {
//         printf("Result: NULL\n");
//     } else {
//         free(result);
//     }

//     return (0);
// }
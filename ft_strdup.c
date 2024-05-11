/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:07:47 by hurabe            #+#    #+#             */
/*   Updated: 2024/05/11 17:58:45 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	return (ft_substr(s1, 0, ft_strlen(s1)));
}

// int main(void) {
//     char const *original = "Hello, world!";
//     char *duplicate;

//     // test1: Normal
//     duplicate = ft_strdup(original);
//     printf("Original: %s\n", original);
//     printf("Duplicate: %s\n", duplicate);
//     free(duplicate);

//     // test2: empty
//     original = "";
//     duplicate = ft_strdup(original);
//     printf("Original: \"%s\"\n", original);
//     printf("Duplicate: \"%s\"\n", duplicate);
//     free(duplicate);

//     return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:07:43 by hurabe            #+#    #+#             */
/*   Updated: 2024/05/01 17:27:29 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

// int main(void)
// {
// 	char *s = "libft-test-tokyo";

// 	printf ("ft_strchr; %s\n", ft_strchr(s, 'l' + 256));
// 	printf ("strchr; %s\n", strchr(s, 'l' + 256));
// 	return (0);	
// }

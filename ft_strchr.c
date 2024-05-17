/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:07:43 by hurabe            #+#    #+#             */
/*   Updated: 2024/05/17 20:37:55 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s != (char)c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}

// int main(void)
// {
// 	char *s = "libft-test-tokyo";

// 	printf ("ft_strchr; %s\n", ft_strchr(s, 'l' + 256));
// 	printf ("strchr; %s\n", strchr(s, 'l' + 256));
// 	return (0);	
// }

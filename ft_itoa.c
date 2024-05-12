/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:07:04 by hurabe            #+#    #+#             */
/*   Updated: 2024/05/12 20:52:54 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlength(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static	void	ft_string(char	*s, unsigned int number, long int len)
{
	while (number > 0)
	{
		s[len--] = '0' + (number % 10);
		number /= 10;
	}
}

char	*ft_itoa(int n)
{
	char			*s;
	long int		numlength;
	unsigned int	num;

	numlength = ft_numlength(n);
	s = (char *)malloc(sizeof(char) * (numlength + 1));
	if (!s)
		return (NULL);
	s[numlength] = '\0';
	if (n == 0)
	{
		s[0] = '0';
		s[1] = '\0';
		return (s);
	}
	if (n < 0)
	{
		num = (unsigned int)(-((long int)n));
		s[0] = '-';
	}
	else
		num = (unsigned int)n;
	ft_string(s, num, numlength - 1);
	return (s);
}

// int main(void) {
//     // test
//     int test_numbers[] = {0, 1, -1, 123, -123, 2147483647, -2147483648};
//     int num_tests = sizeof(test_numbers) / sizeof(test_numbers[0]);

//     for (int i = 0; i < num_tests; i++) {
//         char *result = ft_itoa(test_numbers[i]);
//         if (result) {
//             printf("ft_itoa(%d) = %s\n", test_numbers[i], result);
//             free(result);
//         } else {
//             printf("failed ft_itoa(%d)\n", test_numbers[i]);
//         }
//     }

//     return (0);
// }
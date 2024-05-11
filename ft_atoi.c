/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:06:22 by hurabe            #+#    #+#             */
/*   Updated: 2024/05/11 21:13:48 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || \
	c == '\n' || c == '\r' || c == '\f' || c == '\v');
}

static long	ft_handle_overflow(char *str, int sign)
{
	unsigned long	ret;
	unsigned long	over;
	int				digit;

	ret = 0;
	over = (unsigned long)LONG_MAX;
	while (ft_isdigit(*str))
	{
		digit = *str - '0';
		if (sign == 1 && ret > ((over - digit) / 10))
			return (LONG_MAX);
		if (sign == -1 && ret > ((over + 1 - digit) / 10))
			return (LONG_MIN);
		ret = ret * 10 + digit;
		str++;
	}
	return (ret);
}

int	ft_atoi(char *str)
{
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	result = (int)ft_handle_overflow(str, sign);
	return ((int)(result * sign));
}

// int	main(void)
// {
// 	// long max
// 	char input[] = "9223372036854775807";
//     int num = atoi(input);
// 	int numa = ft_atoi(input);
//     printf("数字: %d %d\n", num ,numa);

// 	// overflow
// 	// long max + 1
// 	char input2[] = "9223372036854775808";
//     int num2 = atoi(input2);
// 	int num2a = ft_atoi(input2);
//     printf("数字: %d %d\n", num2, num2a);

// 	// long max - 1
// 	char input3[] = "9223372036854775806";
//     int num3 = atoi(input3);
// 	int num3a = ft_atoi(input3);
//     printf("数字: %d %d\n", num3, num3a);

// 	// long min
// 	char input4[] = "-9223372036854775808";
//     int num4 = atoi(input4);
// 	int num4a = ft_atoi(input4);
//     printf("数字: %d %d\n", num4, num4a);

// 	// long min -1
// 	// overflow
// 	printf("long_min - 1 overflow!");
// 	char input5[] = "-9223372036854775809";
//     int num5 = atoi(input5);
// 	int num5a = ft_atoi(input5);
//     printf("数字: %d %d\n", num5, num5a);

// 	// long min + 1
// 	printf("long_min + 1");
// 	char input6[] = "-9223372036854775807";
//     int num6 = atoi(input6);
// 	int num6a = ft_atoi(input6);
//     printf("数字: %d %d\n", num6, num6a);

//     return (0);
// }

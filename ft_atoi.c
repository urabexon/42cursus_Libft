/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:06:22 by hurabe            #+#    #+#             */
/*   Updated: 2024/05/08 23:40:05 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || \
	c == '\n' || c == '\r' || c == '\f' || c == '\v');
}

int	ft_atoi(char *str)
{
	int	index;
	int	sign;
	int	result;
	int	digit;

	index = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(str[index]))
		index++;
	if (str[index] == '+')
		index++;
	else if (str[index] == '-')
	{
		sign = -1;
		index++;
	}
	while (ft_isdigit(str[index]))
	{
		digit = str[index] - '0';
		if (result > ((LONG_MAX - digit) / 10))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		result = result * 10 + digit;
		index++;
	}
	if (result > INT_MAX)
	{
		if (sign == 1)
			return (INT_MAX);
		else
			return (INT_MAX);
	}
	return ((int)(result * sign));
}

int	main(void)
{
	char input[] = "-9223372036854775809";
    int num = ft_atoi(input);
    printf("数字: %d\n", num);
    return (0);
}

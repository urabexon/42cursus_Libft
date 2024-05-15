/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:07:29 by hurabe            #+#    #+#             */
/*   Updated: 2024/05/15 15:56:17 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		i = -n;
	}
	else
	{
		i = n;
	}
	if (i >= 10)
		ft_putnbr_fd(i / 10, fd);
	ft_putchar_fd((i % 10) + '0', fd);
}

// int	main(void)
// {
// 	int	fd;

// 	fd = STDOUT_FILENO;

// 	printf("Testing ft_putnbr_fd with STDOUT\n");
// 	printf("Expected: 12345\nActual:   ");
// 	ft_putnbr_fd(12345, fd);
// 	printf("\n");

// 	printf("Expected: -67890\nActual:   ");
// 	ft_putnbr_fd(-67890, fd);
// 	printf("\n");

// 	printf("Expected: 0\nActual:   ");
// 	ft_putnbr_fd(0, fd);
// 	printf("\n");

// 	return (0);
// }
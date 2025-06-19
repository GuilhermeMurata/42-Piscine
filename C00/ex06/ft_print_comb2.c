/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmurata- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 11:45:57 by gmurata-          #+#    #+#             */
/*   Updated: 2025/05/29 14:09:15 by gmurata-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(	char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	num;
	int	counter;

	num = 0;
	counter = 0;
	while (num < 100)
	{
		counter = num + 1;
		while (counter < 100)
		{
			ft_putchar(num / 10 + '0');
			ft_putchar(num % 10 + '0');
			ft_putchar(' ');
			ft_putchar(counter / 10 + '0');
			ft_putchar(counter % 10 + '0');
			if ((num / 10 != 9) || (num % 10 != 8))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			counter++;
		}
		num++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmurata- <gmurata-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 19:31:16 by gmurata-          #+#    #+#             */
/*   Updated: 2025/06/17 12:17:11 by gmurata-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int c)
{
	char	ch;

	ch = c + '0';
	write(1, &ch, 1);
}

void	putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb <= 9)
	{
		print(nb);
	}
	if (nb > 9)
	{
		putnbr(nb / 10);
		putnbr(nb % 10);
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmurata- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 16:29:43 by gmurata-          #+#    #+#             */
/*   Updated: 2025/05/28 17:15:34 by gmurata-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_3num(char comb1, char comb2, char comb3)
{
	write(1, &comb1, 1);
	write(1, &comb2, 1);
	write(1, &comb3, 1);
	if (comb1 != '7' || comb2 != '8' || comb3 != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	comb1;
	char	comb2;
	char	comb3;

	comb1 = '0';
	while (comb1 <= '7')
	{
		comb2 = comb1 + 1;
		while (comb2 <= '8')
		{
			comb3 = comb2 + 1;
			while (comb3 <= '9')
			{
				write_3num(comb1, comb2, comb3);
				comb3++;
			}
		comb2++;
		}	
	comb1++;
	}
}

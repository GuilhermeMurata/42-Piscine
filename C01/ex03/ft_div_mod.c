/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmurata- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:26:22 by gmurata-          #+#    #+#             */
/*   Updated: 2025/05/31 17:53:34 by gmurata-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int num1;
	int num2;
	int num3;
	int num4;

	num1 = 6;
	num2 = 2;

	ft_div_mod(num1, num2, &num3, &num4);
}*/

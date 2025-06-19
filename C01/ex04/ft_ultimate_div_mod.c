/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmurata- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 09:20:31 by gmurata-          #+#    #+#             */
/*   Updated: 2025/06/02 10:12:40 by gmurata-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	r1;
	int	r2;

	r1 = *a / *b;
	r2 = *a % *b;
	*a = r1;
	*b = r2;
}
/*int	main()
{
	int a;
	int b;

	a = 6;
	b = 2;

	ft_ultimate_div_mod(&a, &b);	
	printf"a/b =  %d, sobra %d", a, b);


	char	s[] = 'String;]

	while (s[i] != '\0')
	{
		write(1, &s[++i], 1)
	}
}*/

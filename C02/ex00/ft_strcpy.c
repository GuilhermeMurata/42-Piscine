/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmurata- <gmurata-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 11:59:33 by gmurata-          #+#    #+#             */
/*   Updated: 2025/06/17 12:40:47 by gmurata-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *d)
{
	while (*d)
	{
		write(1, d++, 1);
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i] != '\0')
	{
		i++;
	}
	dest[i] = '\0';

	print(dest);
	return (dest);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_strcpy(av[1], av[2]);
	}
}

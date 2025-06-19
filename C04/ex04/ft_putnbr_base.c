/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmurata- <gmurata-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:36:52 by gmurata-          #+#    #+#             */
/*   Updated: 2025/06/17 19:04:22 by gmurata-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	is_valid_string(char *base)
{
	int	i;
	int	j;
	
	if (!base || ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int		base_n;
	char	c;

	if (!is_valid_string(base))
		return ;

	n = nbr;
	base_n = ft_strlen(base);
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= base_n)
		ft_putnbr_base(n / base_n, base);
	c = base[n % base_n];
	write(1, &c, 1);
}

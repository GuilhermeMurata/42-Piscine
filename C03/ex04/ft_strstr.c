/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmurata- <gmurata-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 11:20:27 by gmurata-          #+#    #+#             */
/*   Updated: 2025/06/10 19:43:29 by gmurata-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*s_ptr;
	char	*tf_ptr;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		s_ptr = str;
		tf_ptr = to_find;
		while (*s_ptr != '\0' && *tf_ptr != '\0' && *s_ptr == *tf_ptr)
		{
			s_ptr++;
			tf_ptr++;
		}
		if (*tf_ptr == '\0')
		{
			return (str);
		}
		str++;
	}
	return (0);
}

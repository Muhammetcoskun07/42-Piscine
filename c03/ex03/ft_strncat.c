/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucoskun <mucoskun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 02:06:19 by mucoskun          #+#    #+#             */
/*   Updated: 2024/02/12 04:33:51 by mucoskun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				length;
	unsigned int	i;

	length = ft_strlen(dest);
	i = 0;
	if (nb < 1)
	{
		return (dest);
	}
	while ((src[i] != 0) && (i < nb))
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = 0;
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucoskun <mucoskun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 08:56:42 by mucoskun          #+#    #+#             */
/*   Updated: 2024/02/15 08:58:23 by mucoskun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*destin;
	int		i;

	i = 0;
	while (src[i])
		i++;
	destin = (char *)malloc(sizeof(char) * (i + 1));
	if (!destin)
		return (0);
	i = 0;
	while (src[i])
	{
		destin[i] = src[i];
		i++;
	}
	destin[i] = '\0';
	return (destin);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucoskun <mucoskun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 08:56:48 by mucoskun          #+#    #+#             */
/*   Updated: 2024/02/15 11:14:21 by mucoskun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new_str;
	int		index;
	int		index2;
	int		index3;

	new_str = (char *)malloc(sizeof(strs));
	index = 0;
	index3 = 0;
	while (index < size)
	{
		index2 = 0;
		while (strs[index][index2] != '\0')
		{
			new_str[index3++] = strs[index][index2++];
		}
		index2 = 0;
		while (sep[index2] != '\0' && index != size - 1)
		{
			new_str[index3++] = sep[index2++];
		}
		index++;
	}
	new_str[index3] = '\0';
	return (new_str);
}

int main() {
    char *dizi[] = {"kaan", "muhammed", "nedim"};
    char *ayrac = "-";
    char *result = ft_strjoin(3, dizi, ayrac);
    if (result != NULL) {
        printf("%s\n", result);
        free(result); // Belleği serbest bırak
    } else {
        printf("Bellek tahsis edilemedi.\n");
    }
    return 0;
}
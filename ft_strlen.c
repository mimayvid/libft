/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmayoral <mmayoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:41:33 by mmayoral          #+#    #+#             */
/*   Updated: 2023/12/11 19:44:21 by mmayoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/* int	main(void)
{
	int		resultado;
	char	str[];

	str = "Hello world <3";
	resultado = ft_strlen(str);
	printf("The length of the string is %d.\n", resultado);
	return (0);
}
 */
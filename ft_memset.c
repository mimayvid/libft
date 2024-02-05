/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmayoral <mmayoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:15:32 by mmayoral          #+#    #+#             */
/*   Updated: 2023/12/19 13:37:09 by mmayoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	char	*p;

	p = (char *)b;
	while (n > 0)
	{
		*p = c;
		p++;
		n--;
	}
	return (b);
}

/* int	main(void)
{
 	char str[100] = "Libc is the standard library.";

	ft_memset(str, '.', 8 * sizeof(char));
	printf("After memset(): %s\n", str);
	return (0);
}
 */
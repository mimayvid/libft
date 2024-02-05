/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmayoral <mmayoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:07:47 by mmayoral          #+#    #+#             */
/*   Updated: 2024/01/09 19:08:46 by mmayoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s++)
			return (0);
	}
	return ((char *)s);
}

/*
int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = 'f';
   char *result;

   result = ft_strchr(str, ch);
   printf("String after a character is %s\n", result);
   return(0);
}
*/
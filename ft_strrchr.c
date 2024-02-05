/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmayoral <mmayoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:21:51 by mmayoral          #+#    #+#             */
/*   Updated: 2024/01/09 19:27:22 by mmayoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;

	str = s;
	while (*s)
		s++;
	while (s >= str)
		if (*s-- == (char)c)
			return ((char *)s + 1);
	return (NULL);
}

/*
int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *result;

   result = ft_strrchr(str, ch);
   printf("String after a character is %s\n", result);
   return(0);
}
*/
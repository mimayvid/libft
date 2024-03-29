/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmayoral <mmayoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:58:07 by mmayoral          #+#    #+#             */
/*   Updated: 2024/01/09 20:59:26 by mmayoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
int main () {
    char str1[15] = "abcdef";
 	char str2[15] = "ABCDEF";
 	int result = ft_strcmp(str1, str2);
 	printf("%d\n", result);
 	if(result < 0) {
        	printf("str1 is less than str2");
 	} else if(result > 0) {
		printf("str2 is less than str1");
 	} else {
 		printf("str1 is equal to str2");
  	}

  	return(0);
 }
*/
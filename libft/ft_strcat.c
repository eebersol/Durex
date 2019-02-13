/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 16:00:42 by eebersol          #+#    #+#             */
/*   Updated: 2015/11/29 17:19:39 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;

	i = ft_strlen(s1);
	while (*s2)
		s1[i++] = *(s2++);
	s1[i] = '\0';
	return (s1);
}

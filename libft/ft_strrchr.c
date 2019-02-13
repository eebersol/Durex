/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 16:00:09 by eebersol          #+#    #+#             */
/*   Updated: 2015/11/29 16:00:10 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int test;

	i = 0;
	test = -1;
	while (s[i])
	{
		if (c == 0)
			return ((char *)(s + ft_strlen(s)));
		if (s[i] == (char)c)
			test = i;
		i++;
	}
	if (test != -1)
		return ((char *)(s + test));
	else
		return ((void *)NULL);
}

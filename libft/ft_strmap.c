/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 15:19:23 by eebersol          #+#    #+#             */
/*   Updated: 2015/12/03 15:19:23 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*str;

	if (s == NULL)
		return (NULL);
	str = ft_strnew(ft_strlen(s) + 1);
	i = 0;
	while (*s)
		str[i++] = f(*s++);
	return (str);
}

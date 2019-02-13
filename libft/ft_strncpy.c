/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 16:00:51 by eebersol          #+#    #+#             */
/*   Updated: 2015/11/29 16:00:52 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	int i;

	i = 0;
	while (n-- > 0)
		if (*src)
			dst[i++] = *src++;
		else
			dst[i++] = '\0';
	return (dst);
}

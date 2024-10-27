/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 02:22:34 by rshatra           #+#    #+#             */
/*   Updated: 2024/03/14 02:39:44 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cop;
	size_t	size;
	size_t	i;

	cop = (char *)s;
	size = ft_strlen(s);
	cop = (char *)malloc(size + 1);
	if (!cop)
		return (NULL);
	i = 0;
	while (i < size)
	{
		cop[i] = s[i];
		i++;
	}
	cop[i] = '\0';
	return (cop);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 04:11:20 by rshatra           #+#    #+#             */
/*   Updated: 2024/03/14 04:26:22 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		j;
	size_t		k;
	char		*s;

	k = 0;
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	s = (char *)malloc(i + j + 1);
	if (!s)
		return (NULL);
	while (i-- && s1[k] != '\0')
	{
		s[k] = s1[k];
		k++;
	}
	i = 0;
	while (i < j && s2[i] != '\0')
	{
		s[k] = s2[i];
		k++;
		i++;
	}
	s[k] = 0;
	return (s);
}

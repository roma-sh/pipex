/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 03:03:32 by rshatra           #+#    #+#             */
/*   Updated: 2024/03/15 03:11:07 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	int	size;

	if (!s || !f)
		return ;
	i = 0;
	size = ft_strlen(s);
	while (size)
	{
		f(i, (s + i));
		size--;
		i++;
	}
}

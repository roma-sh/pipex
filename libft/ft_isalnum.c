/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 21:05:44 by rshatra           #+#    #+#             */
/*   Updated: 2024/03/12 20:09:39 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122) || (a >= 48 && a <= 57))
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	char	x;
	int		y;

	x = '*';
	y = 0;
	y = ft_isalpha(x);
	if (y == 1)
		printf("This is a character\n");
	else
		printf("This is NOT a character\n");
} */

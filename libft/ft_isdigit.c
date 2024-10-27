/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 20:57:45 by rshatra           #+#    #+#             */
/*   Updated: 2024/03/12 19:58:33 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int x)
{
	if (x >= 48 && x <= 57)
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	char	x;
	int		y;

	x = '9';
	y = 0;
	y = ft_isdigit(x);
	if (y == 1)
		printf("This is a number\n");
	else
		printf("This is NOT a number\n");
} */

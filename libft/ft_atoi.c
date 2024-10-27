/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:26:25 by rshatra           #+#    #+#             */
/*   Updated: 2024/03/14 00:52:59 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				neg;
	unsigned int	x;

	i = 0;
	x = 0;
	neg = 1;
	while ((str[i] > 8 && str[i] < 14) || (str[i] == 32))
		i++;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			neg = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		x = (x * 10) + (str[i] - 48);
		i++;
	}
	if (neg < 0)
		x *= -1;
	return ((int)(x));
}

/* int	main(void)
{
	char	*s = "64646464646478979";
	int		x;
	int		y;

	x = ft_atoi(s);
	y = atoi(s);
	printf("my number is: %d\n", x);
	printf("their number is: %d\n", y);
	return (0);
} */

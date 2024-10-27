/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 23:30:44 by rshatra           #+#    #+#             */
/*   Updated: 2024/03/15 02:32:21 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_size(int x)
{
	int	counter;

	counter = 0;
	if (x < 1)
		counter++;
	while (x)
	{
		x /= 10;
		counter++;
	}
	return (counter);
}

static char	*mllc(size_t n)
{
	char	*s;

	s = (char *)malloc(n + 1);
	if (!s)
		return (NULL);
	return (s);
}

static int	negati(int n)
{
	int	x;

	x = n;
	if (n < 0)
		x *= -1;
	return (x);
}

char	*ft_itoa(int n)
{
	unsigned int	nm;
	int				i;
	int				neg;
	char			*s;

	i = num_size(n);
	neg = 0;
	if (n < 0)
		neg = 1;
	s = mllc(i);
	if (!s)
		return (NULL);
	*(s + i) = '\0';
	nm = negati(n);
	while (i--)
	{
		*(s + i) = (nm % 10) + '0';
		nm /= 10;
	}
	if (neg)
		*(s) = '-';
	return (s);
}

/* int	main(void)
{
	int x = -646452;
	char *s = ft_itoa(x);

	printf("%s\n", s);
	free(s);
	return (0);
}
 */

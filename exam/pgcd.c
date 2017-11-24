/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 16:14:45 by enunu             #+#    #+#             */
/*   Updated: 2017/09/27 16:53:30 by enunu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int		ft_min(unsigned int a, unsigned int b)
{
	if (a > b)
		return (b);
	else 
		return (a);
}

int		pgcd(unsigned int a, unsigned int b)
{
	int div;
	int i;

	div = 1;
	i = 1;
	while (i <= ft_min(a, b))
	{
		if (a % i == 0 && b % i == 0)
			div = i;
		i++;
	}
	return (div);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		printf("%i", pgcd(atoi(argv[1]), atoi(argv[2])));
	printf("\n");
	return (0);
}

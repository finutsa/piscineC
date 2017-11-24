/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 17:27:02 by enunu             #+#    #+#             */
/*   Updated: 2017/09/28 18:13:30 by enunu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

/*int main(int argc, char **argv)
{
	int param;
//	int i;

//	i = 1;
	param = ft_putstr(argv[1]);
//	ft_putstr("\n");

	if (argc > i)
	{
		ft_putstr("\n");
		i++;
	}*/
/*	if (argc < 1)
	{
			ft_putstr(argv['\n']);
	}
	write(1, "\n", 1);
	return (0);
}*/


/*int main(int argc, char **argv)
{
	int c;

	c = 0;
	if (argc >= 2)
	{
		write(1 , argv[1], ft_strlen(argv[1]));
	}
	write(1, "\n", 1);
	return (0);
} */

int main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == i)
	{
		write (1, "\n", 1);
		return (0);
	}
	else
		ft_putstr(argv[i]);
	return (0);
}

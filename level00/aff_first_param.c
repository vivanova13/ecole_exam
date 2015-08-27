/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivanova <vivanova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 15:33:11 by vivanova          #+#    #+#             */
/*   Updated: 2015/08/26 16:24:39 by vivanova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//	Write a program that takes strings as arguments and displays its first argument followed by a \n. If the number fo arguments is less than 1, the program displays \n.

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

int		main(int argc, char **argv)
{
	int i;
	int z;

	i = 1;
	z = 0;
	if (i >= argc)
		write(1, "\n", 1);
		while(argv[1][z])
		{
			ft_putchar(argv[1][z]);
			z++;
		}
		ft_putchar('\n');
		z = 0;
	return(0);
}

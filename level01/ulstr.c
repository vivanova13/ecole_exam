/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivanova <vivanova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 15:51:05 by vivanova          #+#    #+#             */
/*   Updated: 2015/08/26 16:31:12 by vivanova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Write a program that takes a string and reverses the case of all its letters. other characters remain unchanged. Display the result followed by a \n. If the number if arguments is not 1, the program displays \n.

int		main(int argc, char **argv)
{
	int l;
	int	w;

	l = 0;
	w = 1;
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		while (argv[w][l])
		{
			if (argv[w][l] >= 'A' && argv[w][l] <= 'Z')
			{
			argv[w][l] +=32;
			}
			else if (argv[w][l] >= 'a' && argv[w][l] <= 'z')
			{
				argv[w][l] -= 32;
			}
			write (1, &argv[w][l], 1);
			l++;
		}
	}
	write (1, "\n", 1);
	return(0);
}

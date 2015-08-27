/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivanova <vivanova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 13:32:21 by vivanova          #+#    #+#             */
/*   Updated: 2015/08/26 13:39:57 by vivanova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//	Write a function that displays all digits in ascending order

void		ft_print_numbers(void)
{
	char c;

	c = '1';
	while (c <= '9')
	{
		write(1, &c, 1);
		c = c + 1;
	}
}

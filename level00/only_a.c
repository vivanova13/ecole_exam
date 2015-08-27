/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivanova <vivanova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 13:41:10 by vivanova          #+#    #+#             */
/*   Updated: 2015/08/26 13:44:59 by vivanova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//	Write a program that displays a character 'a' standard output

int		main()
{
	char c;

	c = 'a';
	write(1, &c, 1);
	return(0);
}

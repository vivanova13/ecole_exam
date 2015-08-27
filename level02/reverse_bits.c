/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivanova <vivanova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 13:23:16 by vivanova          #+#    #+#             */
/*   Updated: 2015/08/27 13:43:49 by vivanova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Write a function that takes a byte, reverses it, bit by bit, and returns the result.

unsigned char		reverse_bits(unsigned char octet)
{
	char	result;

	result = 0;
	while (octet)
	{
		result += value & 1;
		value >>=1;
	}
	return(result);
}

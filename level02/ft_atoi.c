/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivanova <vivanova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 15:51:52 by vivanova          #+#    #+#             */
/*   Updated: 2015/08/27 15:53:30 by vivanova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		count;
	int		number;
	int		neg;

	neg = 1;
	count = 0;
	number = 0;
	while (str[count] == ' ' || str[count] == '+')
		count++;
	if (str[count] == '-')
	{
		neg = -1;
		count++;
	}
	while (str[count])
	{
		if (str[count] < 48 || str[count] > 58)
			break ;
		number *= 10;
		number += str[count] - 48;
		count++;
	}
	return (number * neg);
}

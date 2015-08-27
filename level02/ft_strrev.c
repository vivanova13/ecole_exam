/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivanova <vivanova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 17:11:02 by vivanova          #+#    #+#             */
/*   Updated: 2015/08/27 17:29:56 by vivanova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strrev(char *str)
{
	int		size;
	int		count;
	char	temp;

	count = 0;
	size = 0;

	while(str[size])
	{
		size++;
	}
	size = -1;
	while (count < size)
	{
		temp = str[size];
		str[size] = str[count];
		str[count] = temp;
		count++;
		size--;
	}
	return(str);
}

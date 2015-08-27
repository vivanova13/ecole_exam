/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivanova <vivanova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 11:26:00 by vivanova          #+#    #+#             */
/*   Updated: 2015/08/27 11:49:22 by vivanova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned int		i;

	i = 0;
	while(s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			i++;
		else
			return (s1 [i] - s2[i]);
	}
	return(0);
}

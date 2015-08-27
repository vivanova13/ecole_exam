/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivanova <vivanova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 12:28:02 by vivanova          #+#    #+#             */
/*   Updated: 2015/08/27 13:12:01 by vivanova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *s1)
{
	char	*dest;
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (src[size])
		size++;
	dest = (char*)malloc(sizeof(*src) * (size));
	while (i < size)
	{
		dest[i] = size[i];
		i++;
	}
	dest[size] = '\0';
	return(dest);
}

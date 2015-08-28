/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivanova <vivanova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 19:12:36 by vivanova          #+#    #+#             */
/*   Updated: 2015/08/28 14:15:12 by vivanova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	checkline(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		{
			write (1, &str[i], 1);
			i++;
		}
		if (!str)
			return ;
		if (str[i] >= 'a' && str[i] <= 'z')
			c = str[i++] - 32;
		else
			c = str[i++];
		write (1, &c, 1);
		while (str[i] && (str[i] != ' ' && str[i] != '\t'))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				c = str[i] + 32;
			else c = str[i];
			write (1, &c, 1);
			i++;
		}
	}
}

void	str_capitalizer(int nb, char **tab)
{
	int 	i;

	i = -1;
	while (++i < nb)
	{
		checkline(tab[i]);
		write (1, "\n", 1);
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		str_capitalizer(argc - 1, &argv[1]);
	else
		write (1, "\n", 1);
	return(0);
}

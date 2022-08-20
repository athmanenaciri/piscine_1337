/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:49:36 by anaciri           #+#    #+#             */
/*   Updated: 2021/10/11 10:50:31 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;

	i = argc;
	while (--i)
	{
		str = argv[i];
		j = 0;
		while (str[j])
			j++;
		write(1, str, j);
		write(1, "\n", 1);
	}
}

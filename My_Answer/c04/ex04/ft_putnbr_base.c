/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 18:58:56 by anaciri           #+#    #+#             */
/*   Updated: 2021/10/03 19:04:15 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	validate(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	_ft_putnbr(int nb, int len, char *base)
{
	if (nb < len)
	{
		write(1, base + nb, 1);
	}
	else
	{
		_ft_putnbr(nb / len, len, base);
		_ft_putnbr(nb % len, len, base);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	min;
	int	len;

	len = validate(base);
	if (len < 2)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		min = 1 << (sizeof(int) * 8 - 1);
		if (min == nbr)
		{
			_ft_putnbr(nbr / len * -1, len, base);
			_ft_putnbr(nbr % len * -1, len, base);
			return ;
		}
		nbr = nbr * -1;
	}
	_ft_putnbr(nbr, len, base);
}

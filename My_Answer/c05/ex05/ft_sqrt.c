/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 13:38:55 by anaciri           #+#    #+#             */
/*   Updated: 2021/10/11 09:54:54 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	est;
	int	nest;

	if (nb < 1 )
		return (0);
	est = 1 << 30;
	while (est > nb)
		est >>= 1;
	nest = (est + nb / est) >> 1;
	while (nest < est)
	{
		est = nest;
		nest = (est + nb / est) >> 1;
	}
	if (nb == est * est)
		return (est);
	else
		return (0);
}

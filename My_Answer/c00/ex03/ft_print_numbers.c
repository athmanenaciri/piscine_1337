/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 18:05:43 by anaciri           #+#    #+#             */
/*   Updated: 2021/09/25 08:37:04 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(void)
{
	char	numbr;

	numbr = '0';
	while (numbr <= '9')
	{
		write(1, &numbr, 1);
		numbr++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 14:14:31 by anaciri           #+#    #+#             */
/*   Updated: 2021/10/03 14:44:14 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_space(char c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ');
}

int	ft_atoi(char *str)
{
	int	sign;
	int	res;

	sign = -1;
	while (is_space(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		 str++;
	}
	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res *= 10;
		res -= *str - '0';
		str++;
	}
	return (res * sign);
}

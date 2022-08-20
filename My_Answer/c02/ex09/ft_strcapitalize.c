/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 09:03:34 by anaciri           #+#    #+#             */
/*   Updated: 2021/10/02 09:40:03 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		is_cap;
	int		is_num;
	int		is_low;
	int		is_upp;
	char	*ret;

	ret = str;
	is_cap = 1;
	while (*str)
	{
		is_num = *str >= '0' && *str <= '9';
		is_low = *str >= 'a' && *str <= 'z';
		is_upp = *str >= 'A' && *str <= 'Z';
		if (is_cap && is_low)
			(*str) -= 32;
		else if (!is_cap && is_upp)
			(*str) += 32;
		is_cap = !(is_num || is_low || is_upp);
		str++;
	}
	return (ret);
}

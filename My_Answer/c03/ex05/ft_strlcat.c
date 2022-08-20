/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 18:31:25 by anaciri           #+#    #+#             */
/*   Updated: 2021/10/02 18:33:45 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	min(unsigned int a, unsigned int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = size;
	if (size == 0)
		return (0);
	while (dest[i])
		i++;
	k -= i + 1;
	while (src[j])
	{
		if (j < k)
			dest[i++] = src[j];
		j++;
	}
	dest[i] = 0;
	if (i < size)
		return (j + i);
	else
		return (j + size);
}

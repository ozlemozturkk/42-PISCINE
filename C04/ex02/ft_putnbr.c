/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozozturk <ozozturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:20:20 by ozozturk          #+#    #+#             */
/*   Updated: 2024/08/29 14:16:55 by ozozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_writechar(char ch)
{
	write (1, &ch, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_writechar('-');
		ft_writechar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_writechar ('-');
		nb = -nb ;
		ft_putnbr (nb);
	}
	else if (nb > 9)
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
	else
	{
		ft_writechar(nb + 48);
	}
}

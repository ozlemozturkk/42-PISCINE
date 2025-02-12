/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozozturk <ozozturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:21:41 by ozozturk          #+#    #+#             */
/*   Updated: 2024/09/02 15:11:48 by ozozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2 ;
	if (nb < 2)
	{
		return (0);
	}
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i ++ ;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
	{
		return (nb);
	}
	if (ft_is_prime(nb) == 0)
	{
		while (!(ft_is_prime(nb) == 1))
		{
			nb++;
		}
	}
	return (nb);
}

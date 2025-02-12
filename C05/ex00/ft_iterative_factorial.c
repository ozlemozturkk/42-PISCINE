/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozozturk <ozozturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:31:47 by ozozturk          #+#    #+#             */
/*   Updated: 2024/09/02 11:33:04 by ozozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result ;

	result = 1 ;
	while (nb > 0)
	{
		result *= nb ;
		nb --;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}

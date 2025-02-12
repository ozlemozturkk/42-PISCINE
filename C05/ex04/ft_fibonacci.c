/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozozturk <ozozturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:07:00 by ozozturk          #+#    #+#             */
/*   Updated: 2024/09/02 11:40:08 by ozozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0 || index == 1)
	{
		return (index);
	}
	else
	{
		return (ft_fibonacci (index - 2) + ft_fibonacci (index - 1));
	}
}

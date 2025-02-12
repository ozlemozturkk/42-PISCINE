/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozozturk <ozozturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:11:22 by ozozturk          #+#    #+#             */
/*   Updated: 2024/08/29 16:03:05 by ozozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i ;
	int	sign ;
	int	result ;

	i = 0 ;
	sign = 1 ;
	result = 0 ;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
	{
		i++ ;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result *= 10 ;
		result += str[i] - 48;
		i++;
	}
	return (result * sign);
}

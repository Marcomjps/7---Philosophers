/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_verify_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:39:38 by marsilva          #+#    #+#             */
/*   Updated: 2023/09/20 15:42:02 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	veryfy_pos_int(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

unsigned long long	ft_atoll(char *str)
{
	long long	result;
	int			negativo;

	result = 0;
	negativo = 0;
	if (*str == '-')
	{
		negativo = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	if (negativo)
		result = -result;
	return (result);
}

int	bigger_than_int_max(char *str)
{
	long long	num;

	num = ft_atoll(str);
	if (num > INT_MAX || ft_strlen(str) > 10)
	{
		return (1);
	}
	else
		return (0);
}

int	verify_args_ii(t_args *args, int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (bigger_than_int_max(argv[i]) == 1)
			return (print_and_return_value(0, 
					"Os argumentos tem de ser menores que o INT_MAX"));
		i++;
	}
	if (args->n_philo < 1)
	{
		return (print_and_return_value(0,
				"O programa tem de conter pelo menos um philosoper"));
	}
	return (1);
}

int	verify_args(t_args *args, int argc, char **argv)
{
	int	i;

	if (argc < 5 || argc > 6)
		return (print_and_return_value(0, 
				"O programa só pode receber de 4 a 5 args"));
	i = 1;
	while (i < argc)
	{
		if (veryfy_pos_int(argv[i]) == 0)
			return (print_and_return_value(0, 
					"Os argumentos tem de ser numeros positivos"));
		i++;
	}
	return (verify_args_ii(args, argc, argv));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_verify_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:39:38 by marsilva          #+#    #+#             */
/*   Updated: 2023/09/18 17:27:33 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	print_and_return_value(int value, char *string)
{
	write(1,"Error:\n",7);
	ft_putendl_fd( string, 0);
	write(1,"\n",1);
	return(value);
}

unsigned long long	ft_atoll(char *str) 
{
	long long	result = 0;
	int			negativo = 0;

	if (*str == '-') {
		negativo = 1;
		str++;
	}

	while (*str >= '0' && *str <= '9') {
		result = result * 10 + (*str - '0');
		str++;
	}

	if (negativo) {
		result = -result;
	}

	return result;
}

int bigger_than_int_max(char *str)
{
	long long num = ft_atoll(str);

	if (num > INT_MAX || ft_strlen(str) > 10) {
		return 1;
	} else {
		return 0;
	}	
}
int	verify_args(t_args *args, int argc, char **argv)
{
	int	i;

	if (argc < 6 || argc > 7)
		return (print_and_return_value(0, 
				"O programa só pode receber de 5 a 6 args"));
	i = 1;
	while (i < argc)
	{
		if (veryfy_pos_int(argv[i]) == 0)
			return (print_and_return_value(0, 
					"Os argumentos tem de ser numeros positivos"));
		i++;
	}
	i = 1;
	while (i < argc)
	{
		if (bigger_than_int_max(argv[i]) == 1)
			return (print_and_return_value(0, 
					"Os argumentos tem de ser menores que o INT_MAX"));
		i++;
	}
	if (args->n_philo < 1)
		return (print_and_return_value(0,
				"O programa tem de conter pelo menos um philosoper"));
	return(1);
}
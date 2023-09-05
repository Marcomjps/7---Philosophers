/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_struck.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 10:12:03 by sgoffaux          #+#    #+#             */
/*   Updated: 2023/08/26 21:37:43 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	b_struck_args(t_args *args ,int argc, char **argv)
{
	int i;

	if (argc < 5 || argc > 6)
		return (print_and_return_value(0, "O programa só pode receber de 5 a 6 args"));
	i = 1;
	while(i < argc)
	{
		if(veryfy_pos_int(argv[i]) == 0 )
			return (print_and_return_value(0, "Os argumentos tem de ser numeros positivos"));
		i++;
	}
	args->n_philo = ft_atoi(argv[1]);
	args->time_to_die = ft_atoi(argv[2]);
	args->time_to_eat = ft_atoi(argv[3]);
	args->time_to_sleep = ft_atoi(argv[4]);
	if(argc == 6)
		args->n_to_eat = ft_atoi(argv[5]);
	else
		args->n_to_eat = 0;
	if(args->n_philo < 1)
		return (print_and_return_value(0, "O programa tem de conter pelo menos um philosoper"));
	return(1);
}

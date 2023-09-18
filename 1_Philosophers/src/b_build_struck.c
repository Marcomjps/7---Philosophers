/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_build_struck.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 10:12:03 by sgoffaux          #+#    #+#             */
/*   Updated: 2023/09/18 17:28:14 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	b_struck_args(t_args *args, int argc, char **argv)
{
	if (!verify_args(args, argc, argv))
		return (0);
	args->n_philo = ft_atoi(argv[1]);
	args->time_to_die = ft_atoi(argv[2]);
	args->time_to_eat = ft_atoi(argv[3]);
	args->time_to_sleep = ft_atoi(argv[4]);
	if (argc == 6)
		args->n_to_eat = ft_atoi(argv[5]);
	else
		args->n_to_eat = 0;
	return (1);
}

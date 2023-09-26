/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_destroy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:11:24 by marsilva          #+#    #+#             */
/*   Updated: 2023/09/26 16:31:28 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void destoy_treads(t_data *data)
{
	int	i;

	i = 0;
	while( i < data->args.n_philo)
	{
		pthread_mutex_destroy(&data->forks_mutex[i]);
		i++;
	}
 	pthread_mutex_destroy(&data->mtx_eat);
	
	pthread_mutex_destroy(&data->mtx_cd_stop);
}

void free_memory(t_data *data)
{
	destoy_treads(data);
	free(data->philo);
	free(data->monitoring);
	free(data->forks_mutex);
}
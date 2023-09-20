/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_treads.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:55:53 by marsilva          #+#    #+#             */
/*   Updated: 2023/09/20 17:12:56 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void *routine(void *phi)
{
	t_philo *philo;

	philo = (t_philo *)phi;
	
	if(philo->id_philo % 2 == 1)
		usleep(9000);
	write(1,"hey\n", 4);
	printf("philo n:%i\n", philo->id_philo);
	return(NULL);
}

int create_all_treads(t_data *data)
{
	int i;
	
	i = 0;
	while(i < data->args.n_philo)
	{
		pthread_create(&data->philo[i].philo_tread, NULL, &routine, (void *)&data->philo[i]);
		i++;
	}
	return(1);
}

int	ft_start_treads(t_data *data)
{
	int i;

	i = 0;
	if(!create_all_treads(data))
		return(0);
	data->time = get_time();
	while (i < data->args.n_philo)
	{
		pthread_join(data->philo[i].philo_tread, NULL);
		i++;
	}
	
	//printf("tempo=%lu\n", data->time);
	return (1);

	
}
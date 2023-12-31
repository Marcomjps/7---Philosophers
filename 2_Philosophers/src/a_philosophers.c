/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_philosophers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 10:12:03 by sgoffaux          #+#    #+#             */
/*   Updated: 2023/09/26 16:24:24 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc < 5 || argc > 6)
	{
		printf("Error: wrong number of arguments\n");
		return (0);
	}
	if (!b_struck_args(&data.args, argc, argv))
		return (0);
	if (!ft_init(&data))
		return (0);
	if (!ft_start_treads(&data))
		return (0);
	free_memory(&data);
	return (1);
}

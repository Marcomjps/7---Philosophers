/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treads_teste.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:52:47 by marsilva          #+#    #+#             */
/*   Updated: 2023/09/18 13:52:50 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pthread.h>
#include <unistd.h>
#include <stdio.h>

void *routine()
{
	//sleep(3);
	printf("test from treads\n");
	
	printf("endtreads\n");
	return (NULL);
}

int main()
{
	pthread_t t1, t2;
	
	t1 = 0;
	t2 = 0;
	pthread_create(&t1, NULL, &routine, NULL);
	pthread_create(&t1, NULL, &routine, NULL);
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	return 0;
}



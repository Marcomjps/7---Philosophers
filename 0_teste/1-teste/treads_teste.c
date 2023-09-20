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
/*
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

*/

#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>


/*
void* routine() {
    for (int i = 0; i < 10000000; i++) {
        pthread_mutex_lock(&mutex);
        mails++;
        pthread_mutex_unlock(&mutex);
        // read mails
        // increment
        // write mails
    }
}

*/

typedef struct s_ty
{
	int			*times;
	pthread_mutex_t 	mutex;
}				t_ty;

void* routine(void *mutex) 
{
  	pthread_mutex_lock((pthread_mutex_t*)mutex);
	printf("test from treads\n");
	sleep(3);
	printf("endtreads\n");
	pthread_mutex_unlock((pthread_mutex_t*)mutex);
	return (NULL);
}

int main() {


    pthread_t p1, p2;
	pthread_mutex_t mutex1;
    pthread_mutex_init(&mutex1, NULL);
pthread_mutex_init(&mutex2, NULL);
    if (pthread_create(&p1, NULL, &routine, &mutex1) != 0) {
        return 1;
    }
    if (pthread_create(&p2, NULL, &routine, &mutex1) != 0) {
        return 2;
    }
    if (pthread_join(p1, NULL) != 0) {
        return 5;
    }
    if (pthread_join(p2, NULL) != 0) {
        return 6;
    }
   
    pthread_mutex_destroy(&mutex1);
    //printf("Number of mails: %d\n", mails);
    return 0;
}

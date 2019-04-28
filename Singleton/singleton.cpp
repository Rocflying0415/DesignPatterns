/*
 * singleton.cpp
 *
 *  Created on: 2019年4月29日
 *      Author: Zuokp
 */
#include "singleton_a.h"
#include "singleton_b.h"

#include <iostream>

void *funRun(void *args)
{
	int i = 10;
	do
	{
		SingletonA *A = SingletonA::getInstance();
		if (NULL != A)
		{
			fprintf(stderr, " 懒汉模式：%p\n", A);
		}
	}while(--i);
	return NULL;
}

int main(int argc, char *argv[])
{
	pthread_t  thread[2];

	int i;

	SingletonB *pInstance1 = SingletonB::getInstance();
	SingletonB *pInstance2 = SingletonB::getInstance();
	if (pInstance1 == pInstance2)
	{
		if (NULL != pInstance1)
		{
			fprintf(stderr, " 饿汉模式：%p\n", pInstance1);
		}
	}

 	for (i = 0; i < 2; ++i)
	{
		if (pthread_create(&thread[i], NULL, funRun, NULL) == -1)
		{
			fprintf(stderr, "pthread_create failed!\n");
			return -1;
		}
	}

	for (i = 0; i < 2; ++i)
	{
		if (pthread_join(thread[i], NULL) == -1)
		{
			fprintf(stderr, "fail to recollect thread[%I64u]\n", i);
			return -1;
		}
	}
	return 0;
}




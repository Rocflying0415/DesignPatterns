/*
 * singleton_a.h
 *
 *  Created on: 2019年4月29日
 *      Author: Zuokp
 */

#ifndef SINGLETON_A_H_
#define SINGLETON_A_H_
#include <pthread.h>

/*懒汉模式*/
class SingletonA
{
public:
	static SingletonA* getInstance();
protected:
	SingletonA();

private:
	static pthread_mutex_t  mutex;
	static SingletonA *pInstance;
};

pthread_mutex_t SingletonA::mutex;
SingletonA *SingletonA::pInstance = NULL;

SingletonA::SingletonA()
{
	pthread_mutex_init(&mutex, NULL);
}

SingletonA* SingletonA::getInstance()
{
	if (NULL == pInstance)
	{
		pthread_mutex_lock(&mutex);
		if (NULL == pInstance)
		{
			pInstance = new SingletonA();
		}
		pthread_mutex_unlock(&mutex);
	}
	return pInstance;
}

#endif /* SINGLETON_A_H_ */



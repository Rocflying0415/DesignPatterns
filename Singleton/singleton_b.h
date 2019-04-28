/*
 * singleton_b.h
 *
 *  Created on: 2019年4月29日
 *      Author: Zuokp
 */

#ifndef SINGLETON_B_H_
#define SINGLETON_B_H_
/*饿汉模式*/
class SingletonB
{
public:
	static SingletonB* getInstance();
protected:
	SingletonB();

private:
	static SingletonB *pInstance;
};

SingletonB *SingletonB::pInstance = new SingletonB();

SingletonB::SingletonB() { }

SingletonB *SingletonB::getInstance()
{
	return pInstance;
}
#endif /* SINGLETON_B_H_ */


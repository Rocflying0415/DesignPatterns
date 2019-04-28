/*
 * abstract_factory.h
 *
 *  Created on: 2019年4月28日
 *      Author: Zuokp
 */

#ifndef ABSTRACT_FACTORY_H_
#define ABSTRACT_FACTORY_H_
#include "abstract_product_b.h"

class AbstractFactory
{
public:
	AbstractFactory();
	virtual ~AbstractFactory();

	virtual AbstractProductA* createProductA() = 0;
	virtual AbstractProductB* createProductB() = 0;
};

class Factory1 : public AbstractFactory
{
public:
	Factory1();
	~Factory1();

	AbstractProductA* createProductA();
	AbstractProductB* createProductB();
};

class Factory2 : public AbstractFactory
{
public:
	Factory2();
	~Factory2();

	AbstractProductA* createProductA();
	AbstractProductB* createProductB();
};
#endif /* ABSTRACT_FACTORY_H_ */

/*
 * abstract_factory.h
 *
 *  Created on: 2019年4月28日
 *      Author: Zuokp
 */

#ifndef ABSTRACT_FACTORY_H_
#define ABSTRACT_FACTORY_H_
#include "abstract_product.h"

class AbstractFactory
{
public:
	AbstractFactory();
	virtual ~AbstractFactory();

	virtual AbstractProduct* createProduct() = 0;
};

class FactoryA : public AbstractFactory
{
public:
	FactoryA();
	~FactoryA();

	AbstractProduct* createProduct();
};

class FactoryB : public AbstractFactory
{
public:
	FactoryB();
	~FactoryB();

	AbstractProduct* createProduct();
};
#endif /* ABSTRACT_FACTORY_H_ */

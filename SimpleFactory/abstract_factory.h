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

	virtual AbstractProduct* createProduct(const char type) = 0;
};

class SimpleFactory : public AbstractFactory
{
public:
	SimpleFactory();
	~SimpleFactory();

	AbstractProduct* createProduct(const char type);
};
#endif /* ABSTRACT_FACTORY_H_ */

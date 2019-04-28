/*
 * abstract_product_b.h
 *
 *  Created on: 2019年4月28日
 *      Author: Zuokp
 */

#ifndef ABSTRACT_PRODUCT_B_H_
#define ABSTRACT_PRODUCT_B_H_
#include "abstract_product_a.h"

class AbstractProductB
{
public:
	AbstractProductB();
	virtual ~AbstractProductB();

	virtual void operationB() = 0;
};

class ProductB1 : public AbstractProductB
{
public:
	ProductB1();
	~ProductB1();

	void operationB();
};

class ProductB2 : public AbstractProductB
{
public:
	ProductB2();
	~ProductB2();

	void operationB();
};
#endif /* ABSTRACT_PRODUCT_B_H_ */

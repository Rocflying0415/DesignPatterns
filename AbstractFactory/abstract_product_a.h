/*
 * abstract_product_a.h
 *
 *  Created on: 2019年4月28日
 *      Author: Zuokp
 */

#ifndef ABSTRACT_PRODUCT_A_H_
#define ABSTRACT_PRODUCT_A_H_
#include <iostream>
#include <cstdio>

class AbstractProductA
{
public:
	AbstractProductA();
	virtual ~AbstractProductA();

	virtual void operationA() = 0;
};

class ProductA1 : public AbstractProductA
{
public:
	ProductA1();
	~ProductA1();

	void operationA();
};

class ProductA2 : public AbstractProductA
{
public:
	ProductA2();
	~ProductA2();

	void operationA();
};
#endif /* ABSTRACT_PRODUCT_A_H_ */

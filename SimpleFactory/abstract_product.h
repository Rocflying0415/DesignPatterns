/*
 * abstract_product.h
 *
 *  Created on: 2019年4月28日
 *      Author: Zuokp
 */

#ifndef ABSTRACT_PRODUCT_H_
#define ABSTRACT_PRODUCT_H_
#include <iostream>
#include <cstdio>

class AbstractProduct
{
public:
	AbstractProduct();
	virtual ~AbstractProduct();

	virtual void operation() = 0;
};

class ProductA : public AbstractProduct
{
public:
	ProductA();
	virtual ~ProductA();

	void operation();
};

class ProductB : public AbstractProduct
{
public:
	ProductB();
	virtual ~ProductB();

	void operation();
};
#endif /* ABSTRACT_PRODUCT_H_ */

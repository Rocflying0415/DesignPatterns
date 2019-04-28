/*
 * simple_factory.cpp
 *
 *  Created on: 2019年4月28日
 *      Author: Zuokp
 */
#include "abstract_factory.h"

#include <assert.h>

int main(int argc, char *argv[])
{
	AbstractFactory *factory = new SimpleFactory();
	assert(NULL != factory);

	AbstractProduct *product = factory->createProduct('A');
	if (NULL == product)
	{
		delete factory;
		factory = NULL;
		return -1;
	}
	product->operation();
	delete product;
	product = NULL;

	product = factory->createProduct('B');
	if (NULL == product)
	{
		delete factory;
		factory = NULL;
		return -1;
	}
	product->operation();
	delete product;
	product = NULL;

	delete factory;
	factory = NULL;
	return 0;
}




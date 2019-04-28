/*
 * factory.cpp
 *
 *  Created on: 2019年4月28日
 *      Author: Zuokp
 */
#include "abstract_factory.h"

#include <assert.h>

void test(AbstractFactory *factory)
{
	assert(NULL != factory);

	AbstractProduct *product = factory->createProduct();
	if (NULL == product)
	{
		delete factory;
		factory = NULL;
		return;
	}
	product->operation();

	free(product);
	product = NULL;
	delete factory;
	factory = NULL;
}

int main(int argc, char *argv[])
{
	AbstractFactory *factory = NULL;
	factory = new FactoryA();

	test(factory);

	factory = new FactoryB();
	test(factory);

	return 0;
}




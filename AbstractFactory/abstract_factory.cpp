/*
 * abstract_factory.cpp
 *
 *  Created on: 2019年4月28日
 *      Author: Zuokp
 */

#include "abstract_factory.h"

#include <assert.h>

AbstractFactory::AbstractFactory() { }
AbstractFactory::~AbstractFactory() { }

Factory1::Factory1() { }

Factory1::~Factory1() { }

AbstractProductA* Factory1::createProductA()
{
	AbstractProductA *temp = NULL;
	temp = new ProductA1();
	return temp;
}

AbstractProductB* Factory1::createProductB()
{
	AbstractProductB *temp = NULL;
	temp = new ProductB1();
	return temp;
}

Factory2::Factory2() { }

Factory2::~Factory2() { }

AbstractProductA* Factory2::createProductA()
{
	AbstractProductA *temp = NULL;
	temp = new ProductA2();
	return temp;
}

AbstractProductB* Factory2::createProductB()
{
	AbstractProductB *temp = NULL;
	temp = new ProductB2();
	return temp;
}

void test(AbstractFactory *factory)
{
	assert(NULL != factory);

	AbstractProductA *productA = factory->createProductA();
	if (NULL == productA)
	{
		delete factory;
		factory = NULL;
		return;
	}
	productA->operationA();

	AbstractProductB *productB = factory->createProductB();
	if (NULL == productB)
	{
		delete factory;
		factory = NULL;
		delete productA;
		productA = NULL;
		return;
	}
	productB->operationB();
	delete factory;
	factory = NULL;
	delete productA;
	productA = NULL;
	delete productB;
	productB = NULL;
}

int main(int argc, char *argv[])
{
	AbstractFactory *factory = new Factory1();

	test(factory);
	//
	factory = new Factory2();

	test(factory);

	return 0;
}

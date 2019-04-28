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


int main(int argc, char *argv[])
{
	AbstractFactory *factory = new Factory1();
	assert(NULL != factory);

	AbstractProductA *productA = factory->createProductA();
	if (NULL == productA)
	{
		delete factory;
		factory = NULL;
		return -1;
	}
	productA->operationA();

	AbstractProductB *productB = factory->createProductB();
	if (NULL == productB)
	{
		delete factory;
		factory = NULL;
		delete productA;
		productA = NULL;
		return -1;
	}
	productB->operationB();
	delete factory;
	factory = NULL;
	delete productA;
	productA = NULL;
	delete productB;
	productB = NULL;
	//
	factory = new Factory2();
	assert(NULL != factory);

	productA = factory->createProductA();
	if (NULL == productA)
	{
		delete factory;
		factory = NULL;
		return -1;
	}
	productA->operationA();

	productB = factory->createProductB();
	if (NULL == productB)
	{
		delete factory;
		factory = NULL;
		delete productA;
		productA = NULL;
		return -1;
	}
	productB->operationB();
	delete factory;
	factory = NULL;
	delete productA;
	productA = NULL;
	delete productB;
	productB = NULL;

	return 0;
}

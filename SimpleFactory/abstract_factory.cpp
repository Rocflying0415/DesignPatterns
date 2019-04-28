/*
 * abstract_factory.cpp
 *
 *  Created on: 2019年4月28日
 *      Author: Zuokp
 */

#include "abstract_factory.h"

AbstractFactory::AbstractFactory() { }

AbstractFactory::~AbstractFactory() { }

SimpleFactory::SimpleFactory() { }

SimpleFactory::~SimpleFactory() { }

AbstractProduct* SimpleFactory::createProduct(const char type)
{
	AbstractProduct *temp = NULL;

	switch (type)
	{
		case 'A':
		{
			temp = new ProductA();
		}
			break;
		case 'B':
		{
			temp = new ProductB();
		}
			break;
		default:
			break;
	}
	return temp;
}

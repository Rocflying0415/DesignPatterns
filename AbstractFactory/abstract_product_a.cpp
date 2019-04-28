/*
 * abstract_product_a.cpp
 *
 *  Created on: 2019年4月28日
 *      Author: Zuokp
 */

#include "abstract_product_a.h"

AbstractProductA::AbstractProductA() { }

AbstractProductA::~AbstractProductA() { }

ProductA1::ProductA1() { }

ProductA1::~ProductA1() { }

void ProductA1::operationA()
{
	fprintf(stderr, "operationA of the ProductA1\n");
}

ProductA2::ProductA2() { }

ProductA2::~ProductA2() { }

void ProductA2::operationA()
{
	fprintf(stderr, "operationA of the ProductA2\n");
}

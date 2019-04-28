/*
 * abstract_product_b.cpp
 *
 *  Created on: 2019年4月28日
 *      Author: Zuokp
 */

#include "abstract_product_b.h"

AbstractProductB::AbstractProductB() { }

AbstractProductB::~AbstractProductB() { }

ProductB1::ProductB1() { }

ProductB1::~ProductB1() { }

void ProductB1::operationB()
{
	fprintf(stderr, "operationB of the ProductB1\n");
}

ProductB2::ProductB2() { }

ProductB2::~ProductB2() { }

void ProductB2::operationB()
{
	fprintf(stderr, "operationB of the ProductB2\n");
}




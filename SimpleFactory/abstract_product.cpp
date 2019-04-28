/*
 * abstract_product.cpp
 *
 *  Created on: 2019年4月28日
 *      Author: Zuokp
 */

#include "abstract_product.h"

AbstractProduct::AbstractProduct() { }

AbstractProduct::~AbstractProduct(){ }

ProductA::ProductA() { }

ProductA::~ProductA() { }

void ProductA::operation()
{
	fprintf(stderr, "Operation of the ProductA\n");
}

ProductB::ProductB() { }

ProductB::~ProductB() { }

void ProductB::operation()
{
	fprintf(stderr, "Operation of the ProductB\n");
}


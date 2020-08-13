#include "product.h"
#include <iostream>
#include <cstring>

product::product()
	: price(0.0), weight(0.0) {
	for (int counter = 0; counter < 50; counter++)
		name[counter] = '\0';
}

void product::setName(const char *name_product) {
	strcpy(name, name_product);
}

const char *product::getName() const {
	return name;
}

void product::getPrice(const double &pr) {
	price = (pr >= 0 ? pr : 0)
}

double Product::getPrice() const // возвратить стоимость 1 ед. товара
{
	return price;
}

void Product::setWeight(const double & wgh) // установить вес товара
{
	weight = wgh;
}

double Product::getWeight() const
{
	return weight;
}
#include "buy.h"
#include <iostream>
#include <cstring>

buy::buy() 
	:sum(0), sum_price(0.0), sum_weight(0.0) {}

void buy::setSum(const int & value) {
	sum = (value >= 0 ? value : 0);
	sum_price = sum * getPrice();
	sum_weight = sum * getWeight();
}

int buy::getSum() const {
	return sum;
}

double Buy::getSumPrice() const // возвратить цену за весь купленный товар
{
	return sum_price;
}

double Buy::getSumWeight() const // возвратить общий вес покупки
{
	return sum_weight;
}
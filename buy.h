#ifndef BUY

#endif // !BUY

#include "product.h"

class buy : public product {
private:
	int sum;
	double sum_price, sum_weight;
public:
	buy();

	void setSum(const int &);
	int getSum() const;

	double getSumPrice() const;

	double getSumWeight() const;
};
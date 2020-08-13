#ifdef PRODUCT_H

#endif // PRODUCT_H


class product {
private:
	char name[50];
	double price, weight;

public:
	product();

	void setName(const char*);
	const char *getName() const;

	void setPrice(const double &);
	const char *getName() const;

	void setWeight(const double &);
	double getWeight() const;
};
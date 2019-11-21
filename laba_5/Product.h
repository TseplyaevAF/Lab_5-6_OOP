#pragma once
#include <string>

// Класс Товар
class Product
{
protected:
	std::string _name;
	float _price;
	unsigned _count;

public:
	Product();
	~Product();

	void set_name(std::string name);
	void set_price(float price);
	void set_count(unsigned count);

	std::string get_name() const;
	float get_price() const;
	unsigned get_count() const;
};


#pragma once
#include <string>
#include <iostream>
#include <vector>

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

	// преобразование в строку
	std::string data2string();

	//static float sort_by_price(std::vector <Product> &p); // сортировка товаров по цене
};


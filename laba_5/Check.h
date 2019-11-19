#pragma once
#include "Product.h"
#include <string>

// Класс Товарный Чек
class Check
{
	std::string _date; // дата продажи
	unsigned _count; // кол-во продаж


public:
	void set_date(std::string date);
	void set_count(unsigned count);

	std::string get_date() const;
	unsigned get_count() const;
	
};


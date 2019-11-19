#pragma once
#include "Product.h"
#include <string>

// Класс Товарный Чек
class Check
{
	std::string _date; // дата продажи

public:
	void set_date(std::string date);
	std::string get_date() const;
};


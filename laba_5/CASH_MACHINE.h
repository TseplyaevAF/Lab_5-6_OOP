#pragma once
#include "Check.h"
#include <iostream>

// Класс Кассовый аппарат
class CASH_MACHINE
{
	unsigned _number; // номер кассового аппарата
	Check* c;
public:
	void set_number(unsigned number);
	int get_number() const;

	float numValue(const Product &p) const;
};


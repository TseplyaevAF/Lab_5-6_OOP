#pragma once
#include "Product.h"
#include <string>

// ����� �������� ���
class Check
{
	std::string _date; // ���� �������

public:
	void set_date(std::string date);
	std::string get_date() const;
};


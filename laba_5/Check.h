#pragma once
#include "Product.h"
#include <string>

// ����� �������� ���
class Check
{
	std::string _date; // ���� �������
	unsigned _count; // ���-�� ������


public:
	void set_date(std::string date);
	void set_count(unsigned count);

	std::string get_date() const;
	unsigned get_count() const;
	
};


#pragma once
#include "Product.h"
#include <string>
#include <vector>
//#include <iostream>

// ����� �������� ���
class Check
{
	std::string _date; // ���� �������
	unsigned _count; // ���-�� ������
	std::vector <Product*> _pr; 


public:
	void set_date(std::string date);
	void set_count(unsigned count);

	std::string get_date() const;
	unsigned get_count() const;
	
	void addProduct(Product *pr); // ��������� ������ � ���
};


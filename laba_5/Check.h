#pragma once
#include "Product.h"
#include <vector>
#include "DataHeader.h"
//#include <iostream>

// ���������, ���������� ������ � ������
struct Tinfo {
	std::string _name; // �������� ������
	float _price; // ���� ������
	std::string _date; // ���� �������
	unsigned _count; // ���-�� ������
	float cost; // ��������� �������
};

// ����� �������� ���
class Check
{
	Tinfo info; // ���������� ���� � ������� � ������

public:
	Check();
	Check(std::string name, float price, unsigned count, float cost);

	void set_date(std::string date);
	void set_count(unsigned count);

	std::string get_date() const;
	unsigned get_count() const;
	std::string get_name() const;
	float get_price() const;
	float get_cost() const;

	// ����� ��������� ���� ����������, ������ �� ������� ������ Product
	// count - ���-�� 
	void set_info(Product &p, unsigned count);
	
	//void addProduct(Product *pr); // ��������� ������ � ���
};


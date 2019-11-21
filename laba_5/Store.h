#pragma once
#include <string>
#include "Product.h"
#include "CASH_MACHINE.h"

using namespace std;

// ����� �������
class Store
{
	string _name; // �������� ��������
	string _status; // ������������� �������� (�����������/��������� � �.�.)
	string _director; // ��� ��������� ��������
	vector <Product> _pr; // �����
	vector <CASH_MACHINE*> c_m; // �������� �������

public:
	Store();
	~Store();
	void set_name(string name);
	void set_status(string status);
	void set_director(string director);
	void products(const Product &p1); // ���������� ��������� � ������
	void cashes(CASH_MACHINE *c1); // ���������� ���� � ������

	string get_name() const;
	string get_status() const;
	string get_director() const;

	void delivery(const Product &p);
};


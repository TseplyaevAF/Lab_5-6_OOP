#pragma once
#include <string>
#include "Product.h"
#include "CASH_MACHINE.h"

using namespace std;

// ����� �������
class Store
{

	string _name; // �������� ��������
	string _type; // ��� �������� (�����������/��������� � �.�.)
	string _director; // ��� ��������� ��������
	vector <Product*> _pr; // ������
	vector <CASH_MACHINE*> c_m; // �������� �������
	vector <string> _products;

public:
	// ����������
	enum ERRORS {
		NotAvailable, // ������ ��� � �������
		NoProduct // ����� �� ����������
	};

	Store();
	~Store();

	void set_name(string name);
	void set_type(string type1);
	void set_director(string director);

	// ���������� ������ � ������
	void add_product(Product *p1);
	// ���������� ������ � ������ � ���� ������
	void add_product(const string p);
	// ���������� ����� � ������
	void cashes(CASH_MACHINE *c1);
	// ��������� ������ �� �������
	Product get_product(unsigned i);
	// �������� ������ �� �������
	void delete_product(unsigned i);

	// ������
	string get_name() const;
	string get_type() const;
	string get_director() const;

	// ����� ������� ������ � �������� ���������� �� ��������� �����
	// ������ ��������� �� ���, ���������� �������� � �������
	Check* sale(unsigned count, const std::string name);
};


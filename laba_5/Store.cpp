#include "Store.h"
#include <iostream>

Store::Store() {

}

Store::~Store() {

}

void Store::set_name(string name) {
	_name = name;
}

void Store::set_status(string status) {
	_status = status;
}

void Store::set_director(string director) {
	_director = director;
}

string Store::get_name() const {
	return _name;
}

string Store::get_status() const {
	return _status;
}

string Store::get_director() const {
	return _director;
}

//void Store::delivery(const Product& p) {
//	string date = "12.12.12";
//	std::cout << "Product is <" << p.get_name() << "> was delivered " << date << "\n";
//}

void Store::products(const Product &p1) {
	_pr.push_back(p1);
}

void Store::cashes(CASH_MACHINE *c1) {
	c_m.push_back(c1);
}

Product Store::products_return(unsigned i) {
	return _pr[i];
}

// ����� ������� ������
// ������ �������� - ���-�� ��������� ������
// ������ �������� - �������� ����� ������
bool Store::sale(unsigned count, const std::string name) {
	bool f = 0; 
	unsigned n = 0; // n - ����� ������

	// ����� ���������� ������
	for (unsigned i = 0; i < _pr.size(); i++) {
		if (name == _pr[i].get_name()) {
			if (count <= _pr[i].get_count()) {
				n = i;
				f = 1;
				break;
			}
				
		}
	}
	if (f == 0) return 0; // ������� �� �������

	CASH_MACHINE* cass1 = new CASH_MACHINE();
	cass1->set_number(1);
	cashes(cass1);

	Check* check1 = cass1->numValue(_pr[n], count); // ��������� ������� 
	cout << endl;

	unsigned count1 = _pr[n].get_count(); // ���������� ������� �������� ������� ������

	_pr[n].set_count(count1 - count); // ��������� ���-�� ������ �� ���-�� ����������

	// ���� ������ ����� ����������, �� ������� ��� �� �������
	if (_pr[n].get_count() == 0) _pr.erase(_pr.begin() + n);
}
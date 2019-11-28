#include "Check.h"
#include <iostream>

// �. �� ���������
Check::Check() {
	info._date = getDate();
	info._count = 0;
	info._name = " ";
	info._price = 0;
	info.cost = 0;
}

// �. � �����������
Check::Check(std::string name, float price, unsigned count, float cost) {
	info._date = getDate();
	info._count = count;
	info._name = name;
	info._price = price;
	info.cost = cost;
}

void Check::set_date(std::string date) {
	info._date = date;
}

void Check::set_count(unsigned count) {
	info._count = count;
}

std::string Check::get_date() const {
	return info._date;
}

unsigned Check::get_count() const {
	return info._count;
}

std::string Check::get_name() const {
	return info._name;
}
float Check::get_price() const {
	return info._price;
}

float Check::get_cost() const {
	return info.cost;
}

void Check::set_info(Product& p, unsigned count) {
	info._name = p.get_name();
	info._price = p.get_price();
	info._count = count;
	info.cost = count * p.get_price();
	info._date = getDate();
}

//void Check::addProduct(Product* pr) {
//	_pr.push_back(pr);
//}
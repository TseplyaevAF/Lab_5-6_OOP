#include "Store.h"
#include <iostream>

Store::Store() {

}

Store::~Store() {
	// Очищение памяти
	for (unsigned i = 0; i < _pr.size(); i++) {
		if (_pr[i] != nullptr)
			delete _pr[i];
	}
}

void Store::set_name(string name) {
	_name = name;
}

void Store::set_type(string type1) {
	_type = type1;
}

void Store::set_director(string director) {
	_director = director;
}

string Store::get_name() const {
	return _name;
}

string Store::get_type() const {
	return _type;
}

string Store::get_director() const {
	return _director;
}

//void Store::delivery(const Product& p) {
//	string date = "12.12.12";
//	std::cout << "Product is <" << p.get_name() << "> was delivered " << date << "\n";
//}

void Store::add_product(Product *p1) {
	_pr.push_back(p1);
}

void Store::cashes(CASH_MACHINE *c1) {
	c_m.push_back(c1);
}

Product Store::get_product(unsigned i) {
	return *_pr[i];
}

// Метод продажи товара
// первый параметр - кол-во желаемого товара
// второй параметр - название этого товара
// Возвращает объект класса Check
Check* Store::sale(unsigned count, const std::string name) {
	bool f = 0;
	unsigned n = 0; // n - номер товара

	// поиск указанного товара
	for (unsigned i = 0; i < _pr.size(); i++) {
		if (name == _pr[i]->get_name()) {
			f = 1;
			if (count <= _pr[i]->get_count()) {
				n = i;
				break;
			}
			else throw NotAvailable;
		}
	}

	if (f == 0) throw NoProduct;

	CASH_MACHINE* cass1 = new CASH_MACHINE();
	cass1->set_number(1);
	cashes(cass1);

	Check* check1 = cass1->numValue(*_pr[n], count); // стоимость покупки 
	cout << endl;
	delete cass1;

	unsigned count1 = _pr[n]->get_count(); // возвращаем текущее значение данного товара

	_pr[n]->set_count(count1 - count); // уменьшаем кол-во товара на кол-во проданного

	// если данный товар закончился, то удаляем его из массива
	if (_pr[n]->get_count() == 0) delete_product(n);

	return check1;
}

void Store::add_product(const string p) {
	_products.push_back(p);
}

void Store::delete_product(unsigned i) {
	_pr.erase(_pr.begin() + i);
}
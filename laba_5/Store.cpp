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

void Store::delivery(const Product& p) {
	string date = "12.12.12";
	std::cout << "Product is <" << p.get_name() << "> was delivered " << date;
}
#include "Product.h"

Product::Product() {

}
Product::~Product() {

}

void Product::set_name(std::string name) {
	_name = name;
}

void Product::set_price(float price) {
	_price = price;
}

void Product::set_count(unsigned count) {
	_count = count;
}

std::string Product::get_name() const {
	return _name;
}

float Product::get_price() const {
	return _price;
}

unsigned Product::get_count() const {
	return _count;
}

//float Product::sort_by_price(std::vector <Product>& p) { // сортировка товаров по цене
//
//}
#include "Toy.h"

Toy::Toy() {

}

Toy::~Toy() {

}

Toy::Toy(std::string _name, float price, unsigned ageLimit, float weight, std::string material) {
	_price = price;
	this->_name = _name;
	this->ageLimit = ageLimit;
	this->weight = weight;
	this->material = material;
}

void Toy::set_ageLimit(unsigned n) {
	ageLimit = n;
}

void Toy::set_weight(float weight1) {
	weight = weight1;
}

void Toy::set_material(std::string m1) {
	material = m1;
}

unsigned Toy::get_ageLimit() const {
	return ageLimit;
}

float Toy::get_weight() const {
	return weight;
}

std::string Toy::get_material() const {
	return material;
}
#include "CASH_MACHINE.h"

void CASH_MACHINE::set_number(unsigned number) {
	_number = number;
}

int CASH_MACHINE::get_number() const {
	return _number;
}

float CASH_MACHINE::numValue(const Product &p) const {
	Check* ch1 = new Check();
	ch1->set_date("12.12.12");
	float S = p.get_count() * p.get_price();
	std::cout << "Дата продажи: " << ch1->get_date();
	std::cout << "Стоимость покупки: " << S;
	return S;
}
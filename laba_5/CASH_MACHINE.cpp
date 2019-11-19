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
	ch1->set_count(2);

	float S = ch1->get_count() * p.get_price();

	std::cout << "Товар: " << p.get_name() << "\n";
	std::cout << "Дата продажи: " << ch1->get_date() << "\n";
	std::cout << "Стоимость покупки: " << S << " руб." << "\n";
	return S;
}
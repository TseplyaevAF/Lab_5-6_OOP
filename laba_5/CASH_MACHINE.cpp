#include "CASH_MACHINE.h"

void CASH_MACHINE::set_number(unsigned number) {
	_number = number;
}

int CASH_MACHINE::get_number() const {
	return _number;
}

Check* CASH_MACHINE::numValue( Product &p)  {

	Check* ch1 = new Check();
	ch1->set_date("12.12.12"); // ���� �������
	ch1->set_count(2); // ���-�� ������
	ch1->addProduct(&p);

	float S = ch1->get_count() * p.get_price();

	std::cout << "�����: " << p.get_name() << "\n";
	std::cout << "���� �������: " << ch1->get_date() << "\n";
	std::cout << "��������� �������: " << S << " ���." << "\n";
	return ch1;
}
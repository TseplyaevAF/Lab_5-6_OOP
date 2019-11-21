#include <iostream>
#include "Store.h"
#include "Product.h"

using namespace std;

int main()
{
	setlocale(0, "RUS");
	unsigned n = 2;

	Store m1;
	m1.set_name("The products");
	m1.set_director("Ivanov P.V.");
	m1.set_status("Grocery Store"); // 'продуктовый магазин'
	

	Product p;
	p.set_name("Wheat bread"); // 'хлеб пшеничный'
	p.set_count(rand() % 50);
	p.set_price(rand() % 25);
	m1.products(p);

	CASH_MACHINE* cass1 = new CASH_MACHINE();
	cass1->set_number(1);
	m1.cashes(cass1);
	cass1->numValue(p); // стоимость покупки

	delete cass1;

	system("pause");

	return 0;
}
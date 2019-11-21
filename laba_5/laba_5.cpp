#include <iostream>
#include "Store.h"
#include "Product.h"

using namespace std;

int main()
{
	setlocale(0, "RUS");
	Store m1;
	m1.set_name("The products");
	m1.set_director("Ivanov P.V.");
	m1.set_status("Grocery Store"); // 'продуктовый магазин'

	Product *p = new Product();
	p->set_name("Wheat bread"); // 'хлеб пшеничный'
	p->set_count(50);
	p->set_price(25);

	m1.delivery(*p);

	//Check *ch1 = new Check();
	//ch1->set_date("12.12.12");

	CASH_MACHINE cass1;
	cass1.set_number(1);
	//cass1.numValue(p, *ch1);
	cass1.numValue(*p); // стоимость покупки

	delete p;

	system("pause");

	return 0;
}
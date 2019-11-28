#include <iostream>
#include "Store.h"
#include "Product.h"
#include "Toy.h"

using namespace std;

int main()
{
	string prName;
	unsigned count1 = 0, price1 = 0;

	setlocale(0, "RUS");
	unsigned n = 3;

	Store m1;
	m1.set_name("The products");
	m1.set_director("Ivanov P.V.");
	m1.set_status("Grocery Store"); // 'продуктовый магазин'
	
	for (unsigned i = 0; i < 2; i++) {
		Product* p = new Product();
		cin >> prName;
		p->set_name(prName); // 'хлеб пшеничный'
		cin >> count1;
		p->set_count(count1);
		cin >> price1;
		p->set_price(price1);
		m1.products(*p);
		delete p;
	}

	Check ch;
	try {
		ch = m1.sale(3, "Bread");
	}
	catch (Store::ERRORS e) {
		if (e == Store::NoProduct) 
			cout << "Указанного товара нет\n";
		if (e == Store::NotAvailable) 
			cout << "Указанного товара нет в наличии\n";
	}
	

	//for (unsigned i = 0; i < n; i++)
	//{
	//	Product p = m1.products_return(i);
	//	CASH_MACHINE* cass1 = new CASH_MACHINE();
	//	cass1->set_number(i);
	//	m1.cashes(cass1);
	//	Check* check1 = cass1->numValue(p); // стоимость покупки 
	//	cout << endl;
	//}

	Toy t1("Spider-man", 500, 6, 50, "plastic");

	//delete cass1;

	system("pause");

	return 0;
}
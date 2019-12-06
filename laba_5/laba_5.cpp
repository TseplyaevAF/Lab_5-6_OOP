#include <iostream>
#include "Store.h"
#include "Product.h"
#include "Toy.h"

using namespace std;

int main()
{
	string prName;
	unsigned count1 = 0; float price1 = 0;

	setlocale(0, "RUS");
	unsigned n = 3;

	Store m1;
	m1.set_name("The products");
	m1.set_director("Ivanov P.V.");
	m1.set_type("Grocery Store"); // 'продуктовый магазин'
	
	for (unsigned i = 0; i < 2; i++) {
		Product* p = new Product();
		cin >> prName;
		p->set_name(prName); // 'хлеб пшеничный'
		cin >> count1;
		p->set_count(count1);
		cin >> price1;
		p->set_price(price1);
		m1.add_product(p->data2string());
		m1.add_product(p);
		//delete p;
	}

	try {
		Check *ch = m1.sale(3, "Bread");
		delete ch;
	}
	catch (Store::ERRORS e) {
		if (e == Store::NoProduct) 
			cout << "Указанного товара нет\n";
		if (e == Store::NotAvailable) 
			cout << "Указанного товара нет в наличии\n";
	}

	// Товар игрушка
	// 10 шт., 500 р, 6+, 50 г, материал пластик
	Toy *t1 = new Toy(10, "Spider-man", 500, 6, 50, "plastic");

	m1.add_product(t1);

	Check* ch = m1.sale(1, "Spider-man");
	delete ch;

	system("pause");

	return 0;
}
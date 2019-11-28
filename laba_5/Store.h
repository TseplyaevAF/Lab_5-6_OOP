#pragma once
#include <string>
#include "Product.h"
#include "CASH_MACHINE.h"

using namespace std;

// Класс Магазин
class Store
{

	string _name; // название магазина
	string _type; // тип магазина (продуктовый/мебельный и т.д.)
	string _director; // ФИО директора магазина
	vector <Product> _pr; // товары
	vector <CASH_MACHINE*> c_m; // кассовый аппарат

public:
	// Исключения
	enum ERRORS {
		NotAvailable, // товара нет в наличии
		NoProduct // товар не существует
	};

	Store();
	~Store();
	void set_name(string name);
	void set_type(string type1);
	void set_director(string director);
	void products(const Product &p1); // добавление продуктов в массив
	void cashes(CASH_MACHINE *c1); // добавление касс в массив
	Product products_return(unsigned i);

	string get_name() const;
	string get_type() const;
	string get_director() const;

	Check* sale(unsigned count, const std::string name);
};


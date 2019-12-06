#pragma once
#include <string>
#include "Product.h"
#include "CASH_MACHINE.h"

using namespace std;

//  ласс ћагазин
class Store
{

	string _name; // название магазина
	string _type; // тип магазина (продуктовый/мебельный и т.д.)
	string _director; // ‘»ќ директора магазина
	vector <Product*> _pr; // товары
	vector <CASH_MACHINE*> c_m; // кассовый аппарат
	vector <string> _products;

public:
	// »сключени€
	enum ERRORS {
		NotAvailable, // товара нет в наличии
		NoProduct // товар не существует
	};

	Store();
	~Store();

	void set_name(string name);
	void set_type(string type1);
	void set_director(string director);

	// добавление товара в массив
	void add_product(Product *p1);
	// добавление товара в массив в виде строки
	void add_product(const string p);
	// добавление кассы в массив
	void cashes(CASH_MACHINE *c1);
	// получение товара из массива
	Product get_product(unsigned i);
	// удаление товара из массива
	void delete_product(unsigned i);

	// доступ
	string get_name() const;
	string get_type() const;
	string get_director() const;

	// ћетод продажи товара в заданном количестве по заданному имени
	// ¬ернет указатель на чек, содержащий сведени€ о продаже
	Check* sale(unsigned count, const std::string name);
};


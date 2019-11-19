#pragma once
#include <string>
#include "Product.h"
#include "CASH_MACHINE.h"

using namespace std;

// Класс Магазин
class Store
{
	string _name; // название магазина
	string _status; // специализация магазина (продуктовый/мебельный и т.д.)
	string _director; // ФИО директора магазина
	Product _pr; // товар
	CASH_MACHINE* c_m; // кассовый аппарат

public:
	Store();
	~Store();
	void set_name(string name);
	void set_status(string status);
	void set_director(string director);

	string get_name() const;
	string get_status() const;
	string get_director() const;

	void delivery(const Product &p);
};


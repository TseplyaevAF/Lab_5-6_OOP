#pragma once
#include "Product.h"
#include <vector>
#include "DataHeader.h"
//#include <iostream>

// структура, содержащая данные о товаре
struct Tinfo {
	std::string _name; // название товара
	float _price; // цена товара
	std::string _date; // дата продажи
	unsigned _count; // кол-во продаж
	float cost; // стоимость покупки
};

// Класс Товарный Чек
class Check
{
	Tinfo info; // переменная типа с данными о товаре

public:
	Check();
	Check(std::string name, float price, unsigned count, float cost);

	void set_date(std::string date);
	void set_count(unsigned count);

	std::string get_date() const;
	unsigned get_count() const;
	std::string get_name() const;
	float get_price() const;
	float get_cost() const;

	// Метод заполняет поля значениями, взятых из объекта класса Product
	// count - кол-во 
	void set_info(Product &p, unsigned count);
	
	//void addProduct(Product *pr); // добавляем товары в чек
};


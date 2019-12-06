#pragma once
#include "Product.h"

// ����� �������
class Toy : public Product
{
	unsigned ageLimit; // ����������� �� ��������
	float weight; // ��� �������
	std::string material; // �������� �������

public:
	Toy();
	~Toy();
	Toy(unsigned count, const std::string &_name, float price, unsigned ageLimit, 
		float weight, const std::string &material);

	void set_ageLimit(unsigned n);
	void set_weight(float weight1);
	void set_material(std::string m1);

	unsigned get_ageLimit() const;
	float get_weight() const;
	std::string get_material() const;

	// �������������� � ������
	std::string data2string(Toy &t);
};


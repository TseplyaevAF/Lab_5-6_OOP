#pragma once
#include "Check.h"
#include <iostream>

// ����� �������� �������
class CASH_MACHINE
{
	unsigned _number; // ����� ��������� ��������
	Check* c;
public:
	void set_number(unsigned number);
	int get_number() const;

	Check* numValue( Product &p, unsigned count);

};


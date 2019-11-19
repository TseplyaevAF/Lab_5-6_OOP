#include "Check.h"

void Check::set_date(std::string date) {
	_date = date;
}

std::string Check::get_date() const {
	return _date;
}

void Check::set_count(unsigned count) {
	_count = count;
}

unsigned Check::get_count() const {
	return _count;
}
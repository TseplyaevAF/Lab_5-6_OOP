#include "DataHeader.h"

// Вернет текущую дату
std::string getDate() {
	// переменная структуры, которая получит дату и время текущей ОС
	SYSTEMTIME st;
	GetSystemTime(&st); // получение даты ОС
	// преобразование даты в строку
	std::string date = std::to_string(st.wDay) + "." + std::to_string(st.wMonth) +
		"." + std::to_string(st.wYear);
	return date;
}
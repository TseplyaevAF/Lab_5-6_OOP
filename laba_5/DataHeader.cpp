#include "DataHeader.h"

// ������ ������� ����
std::string getDate() {
	// ���������� ���������, ������� ������� ���� � ����� ������� ��
	SYSTEMTIME st;
	GetSystemTime(&st); // ��������� ���� ��
	// �������������� ���� � ������
	std::string date = std::to_string(st.wDay) + "." + std::to_string(st.wMonth) +
		"." + std::to_string(st.wYear);
	return date;
}
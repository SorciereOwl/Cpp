/*�������� ���������, �������������� ���� ����� ���� int ,
������� ���������� ������, ������� �� �������� ������ � ��� �������� �����,
����������� ����� ����� ����� �� N �������,
����� ������������� ����� � �������� �����.*/

#include <iostream>
#include <bitset>

#define SIZE_INT sizeof(int) * 8

/* ������� ��� ���������� ������������ ������ ����� ����� `n` �� `k` ������� �� ������ ����� `isLeftShift`*/
int circularShift(unsigned n, int k, bool isLeftShift)
{
	// ����� ����� �� `k`
	if (isLeftShift) {
		return (n << k) | (n >> (SIZE_INT - k));
	}
}

int main()
{
	setlocale(LC_ALL, "ru");

	int n;
	int shift;

	std::cout << "������� �����: ";
	std::cin >> n;

	std::cout << "������� ���������� �������� �� ������� ����� ��������: ";
	std::cin >> shift;

	std::cout << "No Shift    " << std::bitset<32>(n) << std::endl;
	std::cout << "Left Shift  " << std::bitset<32>(circularShift(n, shift, true)) << std::endl;

	std::bitset<std::numeric_limits<int>::digits> bitset(n);
	std::cout << "���������� ������ ������� �� �������� ������: " << bitset.count() << std::endl;

	return 0;
}
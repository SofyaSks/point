#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int x, y;
	cout << "������� ����� x: ";
	cin >> x;
	cout << "������� ����� y: ";
	cin >> y;
	int* px = &x;
	int* py = &y;

	// ������� ��������
	cout << "������� �������� = " << (*px + *py) / 2;


	return 0;
}
#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int x, y;
	cout << "¬ведите число x: ";
	cin >> x;
	cout << "¬ведите число y: ";
	cin >> y;
	int* px = &x;
	int* py = &y;

	// —реднее значение
	cout << "—реднее значение = " << (*px + *py) / 2;


	return 0;
}
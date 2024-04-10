#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void Show();
void Zavod();
void BuyMenu();

int balance = 0;
int busness_start;
int passiv = 3000;
string Zavod = "Не куплен";

void Show() {
	int end = clock();
	balance = (end - busness_start) / CLOCKS_PER_SEC * passiv;
	cout << "Ваш баланс составляет " << balance << "$" << endl;
	cout << "Показать баланс повторно(1)" << endl;
	cout << "Вызвать меню покупки(2)" << endl;

	int b;
	cin >> b;
	switch (b) {
	case 1:
		Show();
		break;
	case 2:

		break;
	}
}

void BuyMenu() {
	cout << "Малый бизнесс		Доход:5000$		Статус" << 
}

void Zavod();

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));

	busness_start = clock();
	
	
}
#include <Windows.h>
#include <iostream>
#include <string>
#include <set>
using namespace std;

void Stringcheckelement(string S1,string S2) {
	set <string> Stroka1, Stroka2;
	Stroka1.insert(S1);
	Stroka2.insert(S2);
	if (Stroka1 == Stroka2) {
		cout << "Строки совпадают" << '\n';
	}
	else {
		cout << "Строки не совпадают" << '\n';
	}
}

void gui() {
	int choose;
	cout << "Программа работы с множествами запущена!" << '\n' << "Выберите действие: " << '\n';
	cout << "1. Задание на проверку входящих элементов двух строк" << '\n';
	cout << "2. Задание на проверку выполняющего равенства" << '\n';
	cout << "0. Выйти" << '\n';
	cin >> choose;
	if (choose == 1) {
		cout << "Инициализация..." << '\n';
		cin.clear();
		cout << "Выберите вариант действия: " << '\n';
		cout << "1. Ввести строки самому" << '\n';
		cout << "2. Автозаполнение строк" << '\n';
		cin >> choose;
		if (choose == 1) {
			string S1, S2;
			cout << "Введите первую строку: ";
			cin >> S1;
			cout << '\n' << "Введите вторую строку: ";
			cin >> S2;
			cout << '\n';
			Stringcheckelement(S1, S2);
			cin.clear();
		}
		if (choose == 2) {
			string S1, S2;
			S1 = "Мишки Ми-ми-мишки";
			S2 = "Мишки Ми-ми-мишки";
			Stringcheckelement(S1, S2);
			cin.clear();
		}
		else {
			cout << "Введено неверное действие, попробуйте ещё раз" << '\n';
			gui();
		}
	}
	if (choose == 2) {
		cout << "Инициализация..." << '\n';
		cin.clear();
		cout << "Выберите вариант действия: " << '\n';
		cout << "1. Ввести строки самому" << '\n';
		cout << "2. Автозаполнение строк" << '\n';
		cin >> choose;
	}
	if (choose == 0) {
		exit;
	}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	set <string> S1;
	set <string> S2;
	gui();
	return 0;
}
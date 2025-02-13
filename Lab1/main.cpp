#include <Windows.h>
#include <iostream>
#include <string>
#include <set>
#include <math.h>
#include <algorithm>
using namespace std;

void gui();

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
	gui();
}

void Numberscheckelement(set <int> A, set <int> B) {
	set <int> C, D, E, F;
	set_intersection(A.begin(), A.end(), B.begin(), B.end(), inserter(C, C.begin()));
	set_union(A.begin(), A.end(), B.begin(), B.end(), inserter(D, D.begin()));
	set_difference(C.begin(), C.end(), D.begin(), D.end(), inserter(E, E.begin()));
	set_symmetric_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(F, F.begin()));
	if (F == E ) {
		cout << "Множество А и В ранвы" << '\n';
	}
	else {
		cout << "Множество А и В неранвы" << '\n';
	}
	gui();
}

void Foolcheck(int element) {
	if (element != 0 || element != 1 || element != 2 || element != 3 || element != 4 || element != 5 || element != 6 || element != 7 || element != 8 || element != 9 ) {
		cout << "Введено неверное действие, попробуйте ещё раз" << '\n';
		gui();
	}
}

void gui() {
	string choose;
	cout << "Выберите действие: " << '\n';
	cout << "1. Задание на проверку входящих элементов двух строк" << '\n';
	cout << "2. Задание на проверку выполняющего равенства" << '\n';
	cout << "3. Выйти" << '\n';
	cin >> choose;
	cin >> choose;
	if (choose == "1") {
		cout << "Инициализация..." << '\n';
		cin.clear();
		cout << "Выберите вариант действия: " << '\n';
		cout << "1. Ввести строки самому" << '\n';
		cout << "2. Автозаполнение строк" << '\n';
		cout << "3. Выйти" << '\n';
		cin >> choose;
		if (choose == "1") {
			string S1, S2;
			cout << "Введите первую строку: ";
			cin.ignore();
			cin.clear();
			getline(cin, S1, '\n');
			cout << '\n' << "Введите вторую строку: ";
			getline(cin, S2);
			cout << '\n';
			Stringcheckelement(S1, S2);
		}
		else if (choose == "2") {
			string S1, S2;
			S1 = "Мишки Ми-ми-мишки";
			S2 = "Мишки Ми-ми-мишки";
			Stringcheckelement(S1, S2);
		}
		else if (choose == "3") {
			exit;
		}
		else {
			cout << "Введено неверное действие, попробуйте ещё раз" << '\n';
			gui();
		}
	}
	else if (choose == "2") {
		cout << "Инициализация..." << '\n';
		cin.clear();
		cout << "Выберите вариант действия: " << '\n';
		cout << "1. Ввести множества самому" << '\n';
		cout << "2. Автозаполнение множеств" << '\n';
		cout << "3. Выйти" << '\n';
		cin >> choose;
		if (choose == "1") {
			int i1, i2;
			set <int> numbers1, numbers2;
			cout << "Введите количество элементов первого множества: " << '\n';
			cin >> i1;
			Foolcheck(i1);
			for (int i = 0; i < i1; i++) {
				int x;
				cout << "Введите значение, которое хотите вставить во множество: " << '\n';
				cin >> x;
				Foolcheck(x);
				numbers1.insert(x);
			}
			cout << "Введите количество элементов второго множества: " << '\n';
			cin >> i2;
			Foolcheck(i2);
			for (int i = 0; i < i1; i++) {
				int x;
				cout << "Введите значение, которое хотите вставить во множество: " << '\n';
				cin >> x;
				Foolcheck(x);
				numbers2.insert(x);
			}
			Numberscheckelement(numbers1, numbers2);
		}
		else if (choose == "2") {
			set <int> numbers1{ 10, 5, 4, 9, 8 }, numbers2{ 8, 5, 4};
		}
		else if (choose == "3") {
			exit;
		}
		else{
			cout << "Введено неверное действие, попробуйте ещё раз" << '\n';
			gui();
		}
	}
	else if (choose == "3") {
		exit;
	}
	else {
		cout << "Введено неверное действие, попробуйте ещё раз" << '\n';
		gui();
	}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Программа работы с множествами запущена!" << '\n';
	gui();
	return 0;
}
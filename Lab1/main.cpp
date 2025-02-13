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
		cout << "������ ���������" << '\n';
	}
	else {
		cout << "������ �� ���������" << '\n';
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
		cout << "��������� � � � �����" << '\n';
	}
	else {
		cout << "��������� � � � �������" << '\n';
	}
	gui();
}

void Foolcheck(int element) {
	if (element != 0 || element != 1 || element != 2 || element != 3 || element != 4 || element != 5 || element != 6 || element != 7 || element != 8 || element != 9 ) {
		cout << "������� �������� ��������, ���������� ��� ���" << '\n';
		gui();
	}
}

void gui() {
	string choose;
	cout << "�������� ��������: " << '\n';
	cout << "1. ������� �� �������� �������� ��������� ���� �����" << '\n';
	cout << "2. ������� �� �������� ������������ ���������" << '\n';
	cout << "3. �����" << '\n';
	cin >> choose;
	cin >> choose;
	if (choose == "1") {
		cout << "�������������..." << '\n';
		cin.clear();
		cout << "�������� ������� ��������: " << '\n';
		cout << "1. ������ ������ ������" << '\n';
		cout << "2. �������������� �����" << '\n';
		cout << "3. �����" << '\n';
		cin >> choose;
		if (choose == "1") {
			string S1, S2;
			cout << "������� ������ ������: ";
			cin.ignore();
			cin.clear();
			getline(cin, S1, '\n');
			cout << '\n' << "������� ������ ������: ";
			getline(cin, S2);
			cout << '\n';
			Stringcheckelement(S1, S2);
		}
		else if (choose == "2") {
			string S1, S2;
			S1 = "����� ��-��-�����";
			S2 = "����� ��-��-�����";
			Stringcheckelement(S1, S2);
		}
		else if (choose == "3") {
			exit;
		}
		else {
			cout << "������� �������� ��������, ���������� ��� ���" << '\n';
			gui();
		}
	}
	else if (choose == "2") {
		cout << "�������������..." << '\n';
		cin.clear();
		cout << "�������� ������� ��������: " << '\n';
		cout << "1. ������ ��������� ������" << '\n';
		cout << "2. �������������� ��������" << '\n';
		cout << "3. �����" << '\n';
		cin >> choose;
		if (choose == "1") {
			int i1, i2;
			set <int> numbers1, numbers2;
			cout << "������� ���������� ��������� ������� ���������: " << '\n';
			cin >> i1;
			Foolcheck(i1);
			for (int i = 0; i < i1; i++) {
				int x;
				cout << "������� ��������, ������� ������ �������� �� ���������: " << '\n';
				cin >> x;
				Foolcheck(x);
				numbers1.insert(x);
			}
			cout << "������� ���������� ��������� ������� ���������: " << '\n';
			cin >> i2;
			Foolcheck(i2);
			for (int i = 0; i < i1; i++) {
				int x;
				cout << "������� ��������, ������� ������ �������� �� ���������: " << '\n';
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
			cout << "������� �������� ��������, ���������� ��� ���" << '\n';
			gui();
		}
	}
	else if (choose == "3") {
		exit;
	}
	else {
		cout << "������� �������� ��������, ���������� ��� ���" << '\n';
		gui();
	}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "��������� ������ � ����������� ��������!" << '\n';
	gui();
	return 0;
}
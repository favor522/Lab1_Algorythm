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
		cout << "������ ���������" << '\n';
	}
	else {
		cout << "������ �� ���������" << '\n';
	}
}

void gui() {
	int choose;
	cout << "��������� ������ � ����������� ��������!" << '\n' << "�������� ��������: " << '\n';
	cout << "1. ������� �� �������� �������� ��������� ���� �����" << '\n';
	cout << "2. ������� �� �������� ������������ ���������" << '\n';
	cout << "0. �����" << '\n';
	cin >> choose;
	if (choose == 1) {
		cout << "�������������..." << '\n';
		cin.clear();
		cout << "�������� ������� ��������: " << '\n';
		cout << "1. ������ ������ ������" << '\n';
		cout << "2. �������������� �����" << '\n';
		cin >> choose;
		if (choose == 1) {
			string S1, S2;
			cout << "������� ������ ������: ";
			cin >> S1;
			cout << '\n' << "������� ������ ������: ";
			cin >> S2;
			cout << '\n';
			Stringcheckelement(S1, S2);
			cin.clear();
		}
		if (choose == 2) {
			string S1, S2;
			S1 = "����� ��-��-�����";
			S2 = "����� ��-��-�����";
			Stringcheckelement(S1, S2);
			cin.clear();
		}
		else {
			cout << "������� �������� ��������, ���������� ��� ���" << '\n';
			gui();
		}
	}
	if (choose == 2) {
		cout << "�������������..." << '\n';
		cin.clear();
		cout << "�������� ������� ��������: " << '\n';
		cout << "1. ������ ������ ������" << '\n';
		cout << "2. �������������� �����" << '\n';
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
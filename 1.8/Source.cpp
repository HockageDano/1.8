#include <iostream>
#include <string>

using namespace std;

class Calculator {
private:
	float a;
	float b;
	float c;
	float d;
public:
	void Calc() {
		cout << "����i�� �����: ";
		cin >> a;
		cin >> b;
		cout << "�����i�� ������i�: " << endl;
		cout << "1. ������" << endl;
		cout << "2. �i�����" << endl;
		cout << "3. ���������" << endl;
		cout << "4. ���i�����" << endl;
		cin >> c;
		if (c == 1) {
			cout << a + b << endl;
		}
		if (c == 2) {
			cout << a - b << endl;
		}
		if (c == 3) {
			cout << a * b << endl;
		}
		if (c == 4) {
			if (a > b) {
				cout << a;
				cout << " �i���� �i� ";
				cout << b;
			}
			if (a < b) {
				cout << a;
				cout << " ����� �i� ";
				cout << b;
			}
			if (a == b) {
				cout << "" << endl;
			}
		}
	}
	class Fraction {
	public:
		float a;
		float b;
		float c;
		float w;
		float e;
		float r;
		int t;
		void include() {
			cout << "������ ����� �����:" << endl;
			cout << "ֳ�� �������: " << endl;
			cin >> a;
			cout << "���������: " << endl;
			cin >> b;
			cout << "���������: " << endl;
			cin >> c;
			cout << "������ ����� �����:" << endl;
			cout << "ֳ�� �������: " << endl;
			cin >> w;
			cout << "���������: " << endl;
			cin >> e;
			cout << "���������: " << endl;
			cin >> r;
			cout << "�����i�� ������i�: " << endl;
			cout << "1. ������" << endl;
			cout << "2. �i�����" << endl;
			cout << "3. ���������" << endl;
			cout << "4. ���i�����" << endl;
			cin >> t;
			if (t == 1) {
				cout << ((a * c + b) / c) + ((w * r + e) / r) << endl;
			}
			if (t == 2) {
				cout << ((a * c + b) / c) - ((w * r + e) / r) << endl;
			}
			if (t == 3) {
				cout << ((a * c + b) / c) * ((w * r + e) / r) << endl;
			}
			if (t == 4) {
				if (((a * c + b) / c) == ((w * r + e) / r)) {
					cout << "����� �������!" << endl;
				}
				if (((a * c + b) / c) > ((w * r + e) / r)) {
					cout << "������ ��� ������ �� ������" << endl;
				}
				if (((a * c + b) / c) < ((w * r + e) / r)) {
					cout << "������ ��� ������ �� ������" << endl;
				}
			}
		}
	};
};

int main() {

	setlocale(LC_ALL, "ru");

	Calculator math;
	Calculator::Fraction drob;
	int a;
	cout << "���� �� ������ ��������� ���� � �i��� ������� ����i�� 1;" << endl;
	cout << "���� �� ������ ��������� ���� � ��������� ������� ����i�� 2." << endl;
	cin >> a;
	if (a == 1)
	{
		math.Calc();
	}
	if (a == 2) {
		drob.include();
	}
}
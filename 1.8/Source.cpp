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
		cout << "Введiть числа: ";
		cin >> a;
		cin >> b;
		cout << "Виберiть операцiю: " << endl;
		cout << "1. Додати" << endl;
		cout << "2. Вiдняти" << endl;
		cout << "3. Помножити" << endl;
		cout << "4. Порiвняти" << endl;
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
				cout << " бiльше нiж ";
				cout << b;
			}
			if (a < b) {
				cout << a;
				cout << " менше нiж ";
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
			cout << "Введіть перше число:" << endl;
			cout << "Ціла частина: " << endl;
			cin >> a;
			cout << "Чисельник: " << endl;
			cin >> b;
			cout << "Знаменник: " << endl;
			cin >> c;
			cout << "Введіть друге число:" << endl;
			cout << "Ціла частина: " << endl;
			cin >> w;
			cout << "Чисельник: " << endl;
			cin >> e;
			cout << "Знаменник: " << endl;
			cin >> r;
			cout << "Виберiть операцiю: " << endl;
			cout << "1. Додати" << endl;
			cout << "2. Вiдняти" << endl;
			cout << "3. Помножити" << endl;
			cout << "4. Порiвняти" << endl;
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
					cout << "Числа однакові!" << endl;
				}
				if (((a * c + b) / c) > ((w * r + e) / r)) {
					cout << "Перший дріб більший ніж другий" << endl;
				}
				if (((a * c + b) / c) < ((w * r + e) / r)) {
					cout << "Другий дріб більший ніж перший" << endl;
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
	cout << "Якщо ви бажаєте працювати лише з цiлим числами введiть 1;" << endl;
	cout << "Якщо ви бажаєте працювати лише з дробовими числами введiть 2." << endl;
	cin >> a;
	if (a == 1)
	{
		math.Calc();
	}
	if (a == 2) {
		drob.include();
	}
}
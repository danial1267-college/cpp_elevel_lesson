#include <iostream>
#include "students.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RUSSIAN");

	ISP11_221 student;

	string name;
	string last_name;

	cout << "Имя: ";
	getline(cin, name);

	cout << "Фамилия: ";
	getline(cin, last_name);

	student.set_name(name);
	student.set_last_name(last_name);

	int scores[5];
	int sum = 0;

	for (int i = 0; i < 5; ++i) {
		cout << "Оценка " << i + 1 << ": ";
		cin >> scores[i];
		sum += scores[i];
	}

	student.set_scores(scores);
	float average_ball = sum / 5.0;
	student.set_average_ball(average_ball);
	cout << "Средний балл " << student.get_name() << " "
		<< student.get_last_name()
		<< student.get_average_ball() << endl;

	return 0;
}
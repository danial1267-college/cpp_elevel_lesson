#include <fstream>
#include <string>
#include "students.h"

using namespace std;

ISP11_221::~ISP11_221()
{
	ISP11_221::save();
}

void ISP11_221::save()
{
	setlocale(LC_ALL, "RUSSIAN");

	std::ofstream fout("students.txt", std::ios::app);

	fout << ISP11_221::get_name() << " "
		<< ISP11_221::get_last_name() << " ";

	for (int i = 0; i < 5; ++i) {
		fout << ISP11_221::scores[i] << " ";
	}

	fout << endl;
	fout.close();
}

void ISP11_221::set_name(string student_name)
{
	setlocale(LC_ALL, "RUSSIAN");
	ISP11_221::name = student_name;
}

string ISP11_221::get_name()
{
	setlocale(LC_ALL, "RUSSIAN");
	return ISP11_221::name;
}

void ISP11_221::set_last_name(string student_last_name)
{
	setlocale(LC_ALL, "RUSSIAN");
	ISP11_221::last_name = student_last_name;
}

string ISP11_221::get_last_name()
{
	setlocale(LC_ALL, "RUSSIAN");
	return ISP11_221::last_name;
}

void ISP11_221::set_scores(int scores[])
{
	setlocale(LC_ALL, "RUSSIAN");
	for (int i = 0; i < 5; ++i) {
		ISP11_221::scores[i] = scores[i];
	}
}

void ISP11_221::set_average_ball(float ball)
{
	setlocale(LC_ALL, "RUSSIAN");
	ISP11_221::average_ball = ball;
}

float ISP11_221::get_average_ball()
{
	setlocale(LC_ALL, "RUSSIAN");
	return ISP11_221::average_ball;
}
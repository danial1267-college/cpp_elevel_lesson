#pragma once
#include <string>

using namespace std;

class ISP11_221
{
public:
	void save();

	~ISP11_221();

	void set_name(string);
	string get_name();
	void set_last_name(string);
	string get_last_name();
	void set_scores(int[]);
	void set_average_ball(float);
	float get_average_ball();

private:
	int scores[5];
	float average_ball;

	string name;
	string last_name;
};


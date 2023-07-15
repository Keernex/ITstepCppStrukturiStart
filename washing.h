#include "lib.h"

struct Washing
{
	string brand;
	string color;
	string width;
	string height;
	string power;
	string spin_speed;
	string heating_temperature;
	Washing();
	Washing(string brand, string color, string width, string height, string power, string spin_speed, string heating_temperature);
	void start_washing();
	void stop_washing();
	void input_characteristics();
	void print_characteristics();
};
#include "lib.h"

struct Washing
{
	string brand;
	string color;
	int width;
	int height;
	int power;
	int spin_speed;
	int heating_temperature;
	Washing();
	Washing(string brand, string color, int width, int height, int power, int spin_speed, int heating_temperature);
	void start_washing();
	void stop_washing();
	void input_characteristics();
	void print_characteristics();
};



#include "lib.h"

struct Boiler
{
	string brand;
	string color;
	string capacity;
	string volume;
	string heating_temperature;
	Boiler();
	Boiler(string brand,string color,string capacity,string volume,string heating_temperature);
	void start_boiler();
	void stop_boiler();
	void input_characteristics();
	void print_characteristics();
};
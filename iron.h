#include "lib.h"

struct Iron
{
	string brand;
	string model;
	string color;
	string min_temperature;
	string max_temperature;
	string steam_supply;
	string power;
	Iron();
	Iron(string brand,string model,	string color,string min_temperature,string max_temperature,string steam_supply,string power);
	void start_iron();
	void stop_iron();
	void input_characteristics();
	void print_characteristics();
};
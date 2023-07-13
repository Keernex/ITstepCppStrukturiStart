#include <iostream>
#include <string>
using namespace std;

struct Car
{
	int length;
	int clearance;
	int engine_capacity;
	int engine_power;
	int wheel_diameter;
	string color;
	string type_of_gearbox;
	Car();
	Car(int length, int clearance, int engine_capacity, int engine_power, int wheel_diameter, string color, string type_of_gearbox);
	void input_car();
	void print_car();
	void finder_car(string key);
};

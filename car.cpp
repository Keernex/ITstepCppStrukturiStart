#include "car.h"

Car::Car()
{
	length = 0;
	clearance = 0;
	engine_capacity = 0;
	engine_power = 0;
	wheel_diameter = 0;
	color = "NULL";
	type_of_gearbox = "NULL";
}

Car::Car(int length, int clearance, int engine_capacity, int engine_power, int wheel_diameter, string color, string type_of_gearbox)
{
	this->length = length;
	this->clearance = clearance;
	this->engine_capacity = engine_capacity;
	this->engine_power = engine_power;
	this->wheel_diameter = wheel_diameter;
	this->color = color;
	this->type_of_gearbox = type_of_gearbox;
}

void Car::input_car()
{
	cout << "length: ";
	cin >> length;

	cout << "clearance: ";
	cin >> clearance;

	cout << "engine_capacity: ";
	cin >> engine_capacity;

	cout << "engine_power: ";
	cin >> engine_power;

	cout << "wheel_diameter: ";
	cin >> wheel_diameter;

	cout << "color: ";
	cin >> color;

	cout << "type_of_gearbox: ";
	cin >> type_of_gearbox;

	cout << endl;
}

void Car::print_car()
{
	cout << "length: " << length << endl;
	cout << "clearance: " << clearance << endl;
	cout << "engine_capacity: " << engine_capacity << endl;
	cout << "engine_power: " << engine_power << endl;
	cout << "wheel_diameter: " << wheel_diameter << endl;
	cout << "color: " << color << endl;
	cout << "type_of_gearbox: " << type_of_gearbox << endl;
}

void Car::finder_car(string key)
{
	if (color.find(key) == string::npos || type_of_gearbox.find(key) == string::npos)
	{
		cout << "Matching car information found:" << endl;
		cout << endl;
		print_car();
	}
	else
	{
		cout << "No matching car information found." << endl;
	}
}

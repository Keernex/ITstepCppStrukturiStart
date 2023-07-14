#include "washing.h"

Washing::Washing()
{
    brand = "NULL";
    color = "NULL";
    width = 0;
    height = 0;
    power = 0;
    spin_speed = 0;
    heating_temperature = 0;
}
Washing::Washing(string brand, string color, int width, int height, int power, int spin_speed, int heating_temperature)
{
    this->brand = brand;
    this->color = color;
    this->width = width;
    this->height = height;
    this->power = power;
    this->spin_speed = spin_speed;
    this->heating_temperature = heating_temperature;
}
void Washing::start_washing() {
    cout << "Starting the washing machine..." << endl;
}

void Washing::stop_washing() {
    cout << "Stopping the washing machine..." << endl;
}

void Washing::input_characteristics()
{
    cout << "Brand: ";
    cin >> brand;
    cout << "Color: ";
    cin >> color;
    cout << "Dimensions width: ";
    cin >> width;
    cout << "Dimensions height: ";
    cin >> height;
    cout << "Power: ";
    cin >> power;
    cout << "Spin Speed: ";
    cin >> spin_speed;
    cout << "Temperature: ";
    cin >> heating_temperature;
}

void Washing::print_characteristics() {
    cout << "Brand: " << brand << endl;
    cout << "Color: " << color << endl;
    cout << "Dimensions: " << width << " cm x" << height << " cm y" << endl;
    cout << "Power: " << power << "W" << endl;
    cout << "Spin Speed: " << spin_speed << " RPM" << endl;
    cout << "Temperature: " << heating_temperature << " C" << endl;
}
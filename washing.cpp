#include "washing.h"

Washing::Washing()
{
    brand = "NULL";
    color = "NULL";
    width = "NULL";
    height = "NULL";
    power = "NULL";
    spin_speed = "NULL";
    heating_temperature = "NULL";
}
Washing::Washing(string brand, string color, string width, string height, string power, string spin_speed, string heating_temperature)
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
    string h1;
    cout << "Brand: ";
    cin >> h1;

    string h2;
    cout << "Color: ";
    cin >> h2;

    string h3;
    cout << "Dimensions width: ";
    cin >> h3;

    string h4;
    cout << "Dimensions height: ";
    cin >> h4;

    string h5;
    cout << "Power: ";
    cin >> h5;

    string h6;
    cout << "Spin Speed: ";
    cin >> h6;

    string h7;
    cout << "Temperature: ";
    cin >> h7;

    brand = h1;
    color = h2;
    width = h3;
    height = h4;
    power = h5;
    spin_speed = h6;
    heating_temperature = h7;
}

void Washing::print_characteristics() {
    cout << "Brand: " << brand << endl;
    cout << "Color: " << color << endl;
    cout << "Dimensions: " << width << " cm x" << height << " cm y" << endl;
    cout << "Power: " << power << "W" << endl;
    cout << "Spin Speed: " << spin_speed << " RPM" << endl;
    cout << "Temperature: " << heating_temperature << " C" << endl;
}
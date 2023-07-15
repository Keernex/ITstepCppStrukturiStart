#include "boiler.h"

Boiler::Boiler()
{
    brand = "NULL";
    color = "NULL";
    capacity = "NULL";
    volume = "NULL";
    heating_temperature = "NULL";
}
Boiler::Boiler(string brand, string color, string capacity, string volume, string heating_temperature)
{
    this->brand = brand;
    this->color = color;
    this->capacity = capacity;
    this->volume = volume;
    this->heating_temperature = heating_temperature;
}
void Boiler::start_boiler()
{
    cout << "Turn on..." << endl;
    cout << "heating 10%..." << endl;
    cout << "heating 40%..." << endl;
    cout << "heating 100%..." << endl;
    cout << "Ready for operation..." << endl;
}

void Boiler::stop_boiler() {
    cout << "Turn off..." << endl;
}

void Boiler::input_characteristics()
{
    string h1;
    cout << "Brand: ";
    cin >> h1;

    string h2;
    cout << "Color: ";
    cin >> h2;

    string h3;
    cout << "Capacity: ";
    cin >> h3;

    string h4;
    cout << "Volume: ";
    cin >> h4;

    string h5;
    cout << "Heating temperature: ";
    cin >> h5;

    brand = h1;
    color = h2;
    capacity = h3;
    volume = h4;
    heating_temperature = h5;
}

void Boiler::print_characteristics() {
    cout << "Brand: " << brand << endl;
    cout << "Model: " << color << endl;
    cout << "Color: " << capacity << " RPM" << endl;
    cout << "Volume: " << volume << endl;
    cout << "Heating temperature: " << heating_temperature << endl;
}
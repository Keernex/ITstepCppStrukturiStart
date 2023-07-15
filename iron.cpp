#include "iron.h"

Iron::Iron()
{
    brand = "NULL";
    model = "NULL";
    color = "NULL";
    min_temperature = "NULL";
    max_temperature = "NULL";
    steam_supply = "NULL";
    power = "NULL";
}
Iron::Iron(string brand, string model, string color, string min_temperature, string max_temperature, string steam_supply, string power)
{
    this->brand = brand;
    this->model = model;
    this->color = color;
    this->min_temperature = min_temperature;
    this->max_temperature = max_temperature;
    this->steam_supply = steam_supply;
    this->power = power;
}
void Iron::start_iron()
{
    cout << "Turn on..." << endl;
    cout << "heating 10%..." << endl;
    cout << "heating 40%..." << endl;
    cout << "heating 100%..." << endl;
    cout << "Ready for operation..." << endl;
}

void Iron::stop_iron() {
    cout << "Turn off..." << endl;
}

void Iron::input_characteristics()
{
    string h1;
    cout << "Brand: ";
    cin >> h1;

    string h2;
    cout << "Model: ";
    cin >> h2;

    string h3;
    cout << "Color: ";
    cin >> h3;

    string h4;
    cout << "Min temperature: ";
    cin >> h4;

    string h5;
    cout << "Max temperature: ";
    cin >> h5;

    string h6;
    cout << "Steam supply: ";
    cin >> h6;

    string h7;
    cout << "Power: ";
    cin >> h7;

    brand = h1;
    model = h2;
    color = h3;
    min_temperature = h4;
    max_temperature = h5;
    steam_supply = h6;
    power = h7;
}

void Iron::print_characteristics() {
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Color: " << color << " RPM" << endl;
    cout << "Temperature min: " << min_temperature << " C" << endl;
    cout << "Temperature max: " << max_temperature << " C" << endl;
    cout << "Steam supply: " << steam_supply << endl;
    cout << "Power: " << power << "W" << endl;
}
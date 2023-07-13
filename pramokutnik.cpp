#include "pramokutnik.h"

Pramokutnik::Pramokutnik()
{
    name = "NULL";
    height = 0;
    width = 0;
}
Pramokutnik::Pramokutnik(string name, int height, int width)
{
    this->name = name;
    this->height = height;
    this->width = width;
}
void Pramokutnik::input_pramokutnik()
{
    cout << "input name: ";
    cin >> name;

    cout << "input height: ";
    cin >> height;

    cout << "input width: ";
    cin >> width;

}
void Pramokutnik::print_pramokutnik()
{
    cout << "Name: " << name << endl;
    cout << "Height: " << height << endl;
    cout << "Width: " << width << endl;
}
void Pramokutnik::paint_pramokutnik()
{
    for (int i = 0; i < height; i++)
    {
        for (int i = 0; i < width; i++)
        {
            cout << '#';
        }cout << endl;
    }
}
#include "animal.h"

Animal::Animal()
{
    name = "NULL";
    klass = "NULL";
    nickname = "NULL";
}
Animal::Animal(string name, string klass, string nickname)
{
    this->name = name;
    this->klass = klass;
    this->nickname = nickname;
}
void Animal::vois() {
    cout << "Gav Gav..." << endl;
}

void Animal::input_characteristics()
{
    string h1;
    cout << "Name: ";
    cin >> h1;

    string h2;
    cout << "Class: ";
    cin >> h2;

    string h3;
    cout << "Nickname: ";
    cin >> h3;

    name = h1;
    klass = h2;
    nickname = h3;
}

void Animal::print_characteristics() {
    cout << "Brand: " << name << endl;
    cout << "Color: " << klass << endl;
    cout << "Dimensions: " << nickname << endl;
}
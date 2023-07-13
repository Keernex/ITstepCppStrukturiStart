#include "drib_one.h"

Drib_one::Drib_one()
{
    whole_1 = 0;
    numerator_1 = 0;
    denominator_1 = 0;
}
Drib_one::Drib_one(int whole_1,int numerator_1, int denominator_1)
{
    this->whole_1 = whole_1;
    this->numerator_1 = numerator_1;
    this->denominator_1 = denominator_1;
}
void Drib_one::input_drib_one()
{
    cout << "Drib one: " << endl;
    cout << "input whole_1: ";
    cin >> whole_1;
    cout << "input numerator_1: ";
    cin >> numerator_1;
    cout << "input denominator_1: ";
    cin >> denominator_1;
    axe_drib_one();
}
void Drib_one::print_drib_one()
{
    axe_drib_one();
    cout << "Drib_one: " << endl;
    cout << "whole_1: " << whole_1 << endl;
    cout << "numerator_1: " << numerator_1 << endl;
    cout << "denominator_1: " << denominator_1 << endl;
}
void Drib_one::axe_drib_one()
{
    whole_1 += (numerator_1 - numerator_1 % denominator_1) / denominator_1;
    numerator_1 = numerator_1 % denominator_1;
}

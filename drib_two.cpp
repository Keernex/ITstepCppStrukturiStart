#include "drib_two.h"

Drib_two::Drib_two()
{
    whole_2 = 0;
    numerator_2 = 0;
    denominator_2 = 0;
}
Drib_two::Drib_two(int whole_2, int numerator_2, int denominator_2)
{
    this->whole_2 = whole_2;
    this->numerator_2 = numerator_2;
    this->denominator_2 = denominator_2;
}
void Drib_two::input_drib_two()
{
    cout << "Drib two: " << endl;
    cout << "input whole_2: ";
    cin >> whole_2;
    cout << "input numerator_2: ";
    cin >> numerator_2;
    cout << "input denominator_2: ";
    cin >> denominator_2;
    axe_drib_two();
}
void Drib_two::print_drib_two()
{
    axe_drib_two();
    cout << "Drib_two: " << endl;
    cout << "whole_2: " << whole_2 << endl;
    cout << "numerator_2: " << numerator_2 << endl;
    cout << "denominator_2: " << denominator_2 << endl;
}
void Drib_two::axe_drib_two()
{
    whole_2 += (numerator_2 - numerator_2 % denominator_2) / denominator_2;
    numerator_2 = numerator_2 % denominator_2;
}
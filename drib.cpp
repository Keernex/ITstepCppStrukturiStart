#include "drib.h"

Drib::Drib()
{
    whole = 0;
    numerator = 0;
    denominator = 0;
}
Drib::Drib(int whole,int numerator, int denominator)
{
    this->whole = whole;
    this->numerator = numerator;
    this->denominator = denominator;
}
void Drib::input_drib()
{
    cout << "input whole: ";
    cin >> whole;
    cout << "input numerator: ";
    cin >> numerator;
    cout << "input denominator: ";
    cin >> denominator;
    axe_drib();
}
void Drib::print_drib()
{
    axe_drib();
    cout << "input whole: " << whole;
    cout << "input numerator: " << numerator;
    cout << "input denominator: " << denominator;
}
void Drib::axe_drib()
{
    whole += (numerator - numerator % denominator) / denominator;
    numerator = numerator % denominator;
}

#include "combined_one.h"

Combined_one::Combined_one()
{
    a_1 = 0;
    b_1 = 0;
    i_1 = 0;
}
Combined_one::Combined_one(int a_1, int b_1, int i_1)
{
    this->a_1 = a_1;
    this->b_1 = b_1;
    this->i_1 = i_1;
}
void Combined_one::input_combined_one()
{
    cout << "Combined one: " << endl;
    cout << "input a_1: ";
    cin >> a_1;
    cout << "input b_1: ";
    cin >> b_1;
    cout << "input i_1: ";
    cin >> i_1;
}
void Combined_one::print_combined_one()
{
    cout << "Combined_one: " << endl;
    cout << "a_1: " << a_1 << endl;
    cout << "b_1: " << b_1 << endl;
    cout << "i_1: " << i_1 << endl;

    cout << 'z' << " = " << a_1 << " + " << b_1 << " * " << i_1 << endl;
}
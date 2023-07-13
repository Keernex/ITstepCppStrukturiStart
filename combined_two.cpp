#include "combined_two.h"

Combined_two::Combined_two()
{
    a_2 = 0;
    b_2 = 0;
}
Combined_two::Combined_two(int a_2, int b_2)
{
    this->a_2 = a_2;
    this->b_2 = b_2;
}
void Combined_two::input_combined_two()
{
    cout << "Combined two: " << endl;
    cout << "input a_2: ";
    cin >> a_2;
    cout << "input b_2: ";
    cin >> b_2;
}
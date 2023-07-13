#include "point_two.h"

Point_two::Point_two()
{
    x2 = 0;
    y2 = 0;
}
Point_two::Point_two(int x2, int y2)
{
    this->x2 = x2;
    this->y2 = y2;
}
void Point_two::input_point_two()
{
    cout << "input x2: ";
    cin >> x2;
    cout << "input y2: ";
    cin >> y2;
}
void Point_two::print_point_two()
{
    cout << "Point_two" << endl;
    cout << "x2: " << x2 << endl;
    cout << "y2: " << y2 << endl;
}
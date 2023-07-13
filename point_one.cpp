#include "point_one.h"


Point_one::Point_one()
{
    x1 = 0;
    y1 = 0;
}
Point_one::Point_one(int x1, int y1)
{
    this->x1 = x1;
    this->y1 = y1;
}
void Point_one::input_point_one()
{
    cout << "input x1: ";
    cin >> x1;
    cout << "input y1: ";
    cin >> y1;
}
void Point_one::print_point_one()
{
    cout << "Point_one" << endl;
    cout << "x1: " << x1 << endl;
    cout << "y1: " << y1 << endl;
}
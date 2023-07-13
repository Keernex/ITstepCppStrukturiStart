#include "points.h"

void Points::input_points()
{
	point_two.input_point_two();
	point_one.input_point_one();
}

void Points::print_points()
{
	point_two.print_point_two();
	point_one.print_point_one();
}

void Points::len_between_points()
{
	int x1 = point_one.x1;
	cout << x1;
}

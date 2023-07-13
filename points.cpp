#include "points.h"

void Points::input_points()
{
	point_one.input_point_one();
	point_two.input_point_two();
}

void Points::print_points()
{
	point_one.print_point_one();
	point_two.print_point_two();
}

void Points::len_between_points()
{
	cout << "len between points: " << (sqrt(pow((point_two.x2 - point_one.x1),2) + pow((point_two.y2 - point_one.y1), 2)) ) << endl;
}

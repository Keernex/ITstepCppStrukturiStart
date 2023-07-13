#include <iostream>
#include "point_two.h"
#include "point_one.h"
#include <cmath>
using namespace std;
struct Points
{
	Point_two point_two;
	Point_one point_one;
	void input_points();
	void print_points();
	void len_between_points();
};
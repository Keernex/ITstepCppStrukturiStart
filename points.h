#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <regex>
#include <time.h>
#include <windows.h>
#include <algorithm>
#include <string>
#include <sstream>
#include <cstring>
#include <cctype>
using namespace std;

#include "point_two.h"
#include "point_one.h"

struct Points
{
	Point_two point_two;
	Point_one point_one;
	void input_points();
	void print_points();
	void len_between_points();
};
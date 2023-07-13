#include <iostream>
using namespace std;
#include "drib_two.h"
#include "drib_one.h"

struct Dribs
{
	Drib_one drib_one;
	Drib_two drib_two;
	void addition();
	void subtraction();
	void multiplication();
	void division();
};
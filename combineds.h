#include <iostream>
#include <cstdio>
using namespace std;
#include "combined_two.h"
#include "combined_one.h"

struct Combineds
{
	Combined_one combined_one;
	Combined_two combined_two;
	void addition();
	void subtraction();
	void multiplication();
	void division();
};
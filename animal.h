#include "lib.h"

struct Animal
{
	string name;
	string klass;
	string nickname;
	Animal();
	Animal(string name, string klass, string nickname);
	void vois();
	void input_characteristics();
	void print_characteristics();
};
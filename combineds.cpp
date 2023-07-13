#include "combineds.h"


void Combineds::addition()
{
	combined_one.input_combined_one();
	combined_two.input_combined_two();

	combined_one.a_1 = combined_one.a_1 + combined_two.a_2;
	combined_one.b_1 = combined_one.b_1 + combined_two.b_2;

	combined_one.print_combined_one();
}
void Combineds::subtraction()
{
	combined_one.input_combined_one();
	combined_two.input_combined_two();

	combined_one.a_1 = combined_one.a_1 - combined_two.a_2;
	combined_one.b_1 = combined_one.b_1 - combined_two.b_2;

	combined_one.print_combined_one();
}
void Combineds::multiplication()
{
	combined_one.input_combined_one();
	combined_two.input_combined_two();

	combined_one.a_1 = (combined_one.a_1 * combined_two.a_2) - (combined_one.b_1*combined_two.b_2);
	combined_one.b_1 = (combined_one.a_1 * combined_two.b_2) + (combined_one.b_1 * combined_two.a_2);

	combined_one.print_combined_one();
}
void Combineds::division()
{
	combined_one.input_combined_one();
	combined_two.input_combined_two();

	int z = pow((combined_two.a_2),2) + pow((combined_two.b_2), 2);
	combined_one.a_1 = ((combined_one.a_1 * combined_two.a_2) + (combined_one.b_1 * combined_two.b_2))/z;
	combined_one.b_1 = ((combined_one.b_1 * combined_two.a_2) - (combined_one.a_1 * combined_two.b_2))/z;

	combined_one.print_combined_one();
}
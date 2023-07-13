#include "dribs.h"


void Dribs::addition()
{
	drib_one.input_drib_one();
	drib_two.input_drib_two();
	if (drib_one.denominator_1 != drib_two.denominator_2)
	{
		cout << "denominator != denominator" << endl;
		Drib_one drib_one(0, 0, 0);
		Drib_two drib_two(0, 0, 0);
	}
	drib_one.whole_1 = drib_one.whole_1 + drib_two.whole_2;
	drib_two.whole_2 = 0;
	drib_one.numerator_1 = drib_one.numerator_1 + drib_two.numerator_2;
	drib_two.numerator_2 = 0;
	drib_two.denominator_2 = 0;

	drib_one.print_drib_one();
}
void Dribs::subtraction()
{
	drib_one.input_drib_one();
	drib_two.input_drib_two();
	if (drib_one.denominator_1 != drib_two.denominator_2)
	{
		cout << "denominator != denominator" << endl;
		Drib_one drib_one(0, 0, 0);
		Drib_two drib_two(0, 0, 0);
	}
	drib_one.whole_1 = drib_one.whole_1 - drib_two.whole_2;
	drib_two.whole_2 = 0;
	drib_one.numerator_1 = drib_one.numerator_1 - drib_two.numerator_2;
	drib_two.numerator_2 = 0;
	drib_two.denominator_2 = 0;

	drib_one.print_drib_one();
}
void Dribs::multiplication()
{
	drib_one.input_drib_one();
	drib_two.input_drib_two();

	drib_one.numerator_1 = drib_one.whole_1 * drib_one.denominator_1 + drib_one.numerator_1;
	drib_one.whole_1 = 0;
	drib_two.numerator_2 = drib_two.whole_2 * drib_two.denominator_2 + drib_two.numerator_2;
	drib_two.whole_2 = 0;

	drib_one.numerator_1 = drib_one.numerator_1 * drib_two.numerator_2;
	drib_two.numerator_2 = 0;
	drib_one.denominator_1 = drib_one.denominator_1 * drib_two.denominator_2;
	drib_two.denominator_2 = 0;

	drib_one.print_drib_one();
}
void Dribs::division()
{
	drib_one.input_drib_one();
	drib_two.input_drib_two();

	drib_one.numerator_1 = drib_one.whole_1 * drib_one.denominator_1 + drib_one.numerator_1;
	drib_one.whole_1 = 0;
	drib_two.numerator_2 = drib_two.whole_2 * drib_two.denominator_2 + drib_two.numerator_2;
	drib_two.whole_2 = 0;

	drib_one.numerator_1 = drib_one.numerator_1 * drib_two.denominator_2;
	drib_two.numerator_2 = 0;
	drib_one.denominator_1 = drib_one.denominator_1 * drib_two.numerator_2;
	drib_two.denominator_2 = 0;

	drib_one.print_drib_one();
}
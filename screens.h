#include "boiler.h"

struct Screen
{
public:
	static void Home()
	{
		Boiler boiler;
		int q = 0;
		cout << "1 - input characteristics" << endl;
		cout << "2 - print characteristics" << endl;
		cout << "3 - start iron" << endl;
		cout << "4 - stop iron" << endl;
		while (true)
		{
			cout << "Enter num: ";
			cin >> q;
			if (q == 1)
			{
				boiler.input_characteristics();
			}if (q == 2)
			{
				boiler.print_characteristics();
			}if (q == 3)
			{
				boiler.start_boiler();
			}if (q == 4)
			{
				boiler.stop_boiler();
				break;
			}
		}
	}
};
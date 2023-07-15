#include "washing_provider.h"

struct Screen
{
public:
	static void Home()
	{
		Washing washing;
		int q = 0;
		cout << "1 - input characteristics" << endl;
		cout << "2 - print characteristics" << endl;
		cout << "3 - start washing" << endl;
		cout << "4 - stop washing" << endl;
		while (true)
		{
			cout << "Enter num: ";
			cin >> q;
			if (q == 1)
			{
				washing.input_characteristics();
			}if (q == 2)
			{
				washing.print_characteristics();
			}if (q == 3)
			{
				washing.start_washing();
			}if (q == 4)
			{
				washing.stop_washing();
				break;
			}
		}
	}
};

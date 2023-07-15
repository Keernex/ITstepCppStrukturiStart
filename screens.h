#include "iron.h"

struct Screen
{
public:
	static void Home()
	{
		Iron iron;
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
				iron.input_characteristics();
			}if (q == 2)
			{
				iron.print_characteristics();
			}if (q == 3)
			{
				iron.start_iron();
			}if (q == 4)
			{
				iron.stop_iron();
				break;
			}
		}
	}
};
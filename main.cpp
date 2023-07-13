#include "dribs.h"

int main()
{
    Dribs drids;
    int q = 0;
    cout << "1 : +" << endl;
    cout << "2 : -" << endl;
    cout << "3 : *" << endl;
    cout << "4 : /" << endl;
    cin >> q;
    if (q == 1)
    {
        drids.addition();
    }
    if (q == 2)
    {
        drids.subtraction();
    }
    if (q == 3)
    {
        drids.multiplication();
    }
    if (q == 4)
    {
        drids.division();
    }
    return 0;
}
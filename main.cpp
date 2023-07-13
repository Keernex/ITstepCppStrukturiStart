#include "combineds.h"

int main()
{
    Combineds combineds;
    int q = 0;
    cout << "1 : +" << endl;
    cout << "2 : -" << endl;
    cout << "3 : *" << endl;
    cout << "4 : /" << endl;
    cin >> q;
    if (q == 1)
    {
        combineds.addition();
    }
    if (q == 2)
    {
        combineds.subtraction();
    }
    if (q == 3)
    {
        combineds.multiplication();
    }
    if (q == 4)
    {
        combineds.division();
    }
    return 0;
}
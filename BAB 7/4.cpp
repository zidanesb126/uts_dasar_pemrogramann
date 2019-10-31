#include <iostream>
using namespace std;

int main()
{
    char NAMAKU [6] = {'D','E','N','I','S','\0'};
    char NAMAMU [6] = "DENIS";

    for (int C=0; C<6; C++)
    {
        cout << NAMAKU [C];
    }
    cout << endl;

    cout << NAMAMU;

    cout << endl << endl;

    cout << "jumlah elemen NAMAKU: " << sizeof (NAMAKU) << endl;

    cout << "jumlah elemen NAMAMU: " << sizeof (NAMAMU) << endl << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    cout << "Nama   : Denisa " << endl;
    cout << "Nim    : A2.1900045" << endl;

    int A [2] [4] = {1,2,3,4,5,6,7,8};

    int i,j;
    cout << "aplikasi matriks ordo 2 x 4" <<endl;
    for (i=0; i<2; i++)
    {
        for (j=0; j<4; j++)
        {
            //menampilkan hasil dari indeks i dan j
            cout << "A [" <<i<< "] ["<<j<<"] = " <<A [i] [j] << endl;
        }
    cout << endl;
    }
    return 0;
}

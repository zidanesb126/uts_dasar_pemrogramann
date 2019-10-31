#include <iostream>
using namespace std;

int main()
{
    typedef int matriks [3] [2];
    matriks A, B, C;
    int j, k;

    //nilai pada elemen A
    cout << "matriks A: " << endl;
    for (j=0; j<3; j++)
    {
        for (k=0; k<2; k++)
    {

        cout << "A [" << j <<"] ["<< k <<"] = "; //menampilkan hasil inputan matriks
            cin >> A [j] [k]; //inputan dari matriks A
    }
    }
    cout << endl;
    //nilai pada elemen B
     cout << "matriks A: " << endl;
    for (j=0; j<3; j++)
    {
        for (k=0; k<2; k++)
    {

        cout << "A [" << j <<"] ["<< k <<"] = ";
            cin >> A [j] [k];
    }
    }
    cout << endl;

    cout << endl;

    //proses penjumlahan A dan B
    for (j=0; k<3; j++)
    {
        for (k=0; k<2; k++)
        {
            C [j] [k] = A[j] [k] + B[j] [k];
        }
    }
    //menampilkan hasil penjumlahan
    cout << "hasil pejumlahan matriks: " << endl;
    for (j=0; j<3; j++)
    {
        for (k=0; k<2; k++)
        {
            cout << "C ["<<j<<"] ["<<k<<"] = " << C [j] [k] << endl;
        }
    }
    cout << endl;

    return 0;
}

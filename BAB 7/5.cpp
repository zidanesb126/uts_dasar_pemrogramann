#include <iostream>
using namespace std;

int main()
{
    int A[7];
    int j, k, C, temp;

    cout << "masukan nilai pada elemen array: " << endl;
    for (C=0; C<7; C++)
    {
        //menginput elemen array
        cout << "A[" << C << "] = ";
        cin >> A[C];
    }
    cout << "\n nilai element array sebelum diurutkan: " << endl;
    for (C=0; C<7; C++)
    {
        cout << "A[" << C << "] = " << A[C] <<endl;
    }

    // pengurutan metode maksimum-minimum
    int jmaks, U=6;
    for (j=0; j<6; j++)
    {
        jmaks = 0;
        for (k=1; k<=U; k++)
        {
            if (A[k] > A[jmaks])
            {
                jmaks = k;
            }
        }
        //penukaran nilai elemen array
        temp = A[U];
        A[U] = A[jmaks];
        A [jmaks] = temp;
        U--;
    }
    cout << "\n nilai elemen setelah diurutkan: " << endl;
    for (C=0; C<7; C++)
    {
        cout << "A[" << C << "] = " << A[C] << endl;
    }
    return 0;
}

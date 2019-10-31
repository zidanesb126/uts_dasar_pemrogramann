#include <iostream>
using namespace std;

int main()
{
    int A[10];
    int nilai;
    cout << "nama:  denisa" << endl;
    cout << "nim:   a2.1900045" << endl << endl;
    cout << "nilai pada: " << endl << endl;
    for (int C=0; C<10; C++)
    {
    cout << "indeks [" << C <<"] = ";
    cin >> A[C];
    }
    cout << endl;

    cout << "nilai yang dicari adalah: ";
    cin >> nilai;
    for (int D = 0; D<10; D++)
    {
        if (A[D] == nilai)
        {
            cout << "nilai terdapat pada indeks ke: " << D << endl;
            break;
        }
    }
    cout << "\n";
    return 0;
}

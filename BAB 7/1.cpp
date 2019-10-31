#include <iostream>
using namespace std;

int main()
{
    int nama_array[10];
    cout << "masukan nilai pada: " << endl;
    for (int c=0; c<10; c++)
    {
        cout << "elemen [" << c <<"] =";
        cin >> nama_array [c];
    }
    cout << "\n";

    cout << "tampilkan nilai yang dimasukan: " << endl;
    for (int d = 0; d<10; d++)
    {
        cout << "nilai yang terdapat pada elemen ke: ";
        cout << d+1 << " = " << nama_array[d] << endl;
    }
    cout << "\n";

    return 0;
}

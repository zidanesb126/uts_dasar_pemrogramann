#include <iostream>
using namespace std;

int main()
{
    string nama, ttl, alamat;
    cout << "Nama   : ";
    cin >> nama;
    cout << "TTL    : ";
    cin >> ttl;
    cout << "Alamat : ";
    cin >> alamat;
    cout << "\n \n";

    cout << "Hallo " << nama << endl;
    cout << "Ini adalah data diri anda";
    cout << "\n \n";

    cout << "================================================" << endl;
    cout << "|                    DATA DIRI                 |" << endl;
    cout << "================================================" << endl;
    cout << "                Nama      : " << nama << "                            " << endl;
    cout << "                TTL       : " << ttl << "                         " << endl;
    cout << "                Alamat    : " << alamat << "                        " << endl;
    cout << "================================================" << endl;

    return 0;
}

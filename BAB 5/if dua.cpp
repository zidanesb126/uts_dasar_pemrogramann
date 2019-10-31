#include <iostream>
using namespace std;

int main()
{
    cout << "KELULUSAN SISWA \n \n";

    double nilai_ujian;
    cout << "Masukan nilai ujian: ";
    cin >> nilai_ujian;
    cout << endl;

    if (nilai_ujian >=60)
    {
        cout << ("Hasil ujian = LULUS");
        cout << endl << endl;
    }else
    {
        cout << "Hasil Ujian = Tidak Lulus";
        cout << endl << endl;
    }
    return 0;
}

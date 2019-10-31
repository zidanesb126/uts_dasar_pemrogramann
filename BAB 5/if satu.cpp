#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    cout << "Kelulusan siswa \n \n";

    double nilai_ujian;

    cout << "Masukan nilai ujian: ";
    cin >> nilai_ujian;
    cout << endl;

    char hasil_ujian[12] = "Tidak Lulus";
    if (nilai_ujian >= 60)
    strcpy (hasil_ujian, "LULUS");

    cout << "hasil_ujian: ";
    cout << hasil_ujian;
    cout << endl << endl;

    return 0;
}

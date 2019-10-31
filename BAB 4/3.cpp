#include <iostream>
using namespace std;

int main()
{
    cout << "=========================================\n";
    cout << "NAMA   : DENISA                          \n";
    cout << "NIM    : A2.1900045                      \n";
    cout << "JURUSAN: TEKNIK INFORMATIKA              \n";
    cout << "BLOG   : WWW.DENISA.COM                  \n";
    cout << "=========================================\n";
    cout << "           LATIHAN INPUT OUTPUT          \n";
    cout << "*****************************************\n";
    char tampilkan[1];
    char nama[50], alamat[50], tl[50], jk[50], no[50], pekerjaan[50], email[50], website[50];
    cout << "NAMA: ";
    cin.getline(nama,50);
    cout << "ALAMAT: ";
    cin.getline(alamat,50);
    cout << "TANGGAL LAHIR: ";
    cin.getline(tl,50);
    cout << "JENIS KELAMIN: ";
    cin.getline(jk,50);
    cout << "NO TELP/HP: ";
    cin.getline(no,50);
    cout << "PEKERJAAN: ";
    cin.getline(pekerjaan,50);
    cout << "EMAIL: ";
    cin.getline(email,50);
    cout << "WEBSITE: ";
    cin.getline(website,50);
    cout << "JURUSAN: TEKNIK INFORMATIKA STMIK SUMEDANG ";
    cin.getline(tampilkan,1);

    return 0;

}

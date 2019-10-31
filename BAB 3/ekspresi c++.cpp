// program: lintasan.cpp
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double sudut = 40;
    double kecepatan = 32;

    double radian = sudut * 3.14 / 180;

    double jarak = 2 * kecepatan * kecepatan * sin(radian) * cos(radian) / 9.8;
    cout << "jarak = " << jarak << endl;

    return 0;
}

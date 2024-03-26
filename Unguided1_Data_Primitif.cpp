#include <iostream>
using namespace std;

int jari;
float luas_lingkaran() {
    return 3.14 * jari* jari;
}
float keliling_lingkaran() {
    return 2 * 3.14 * jari;
}

int main() {
    cout << "Program Menghitung Luas dan Keliling Lingkaran" << endl;
    cout << "Masukan Jari-Jari:";
    cin >> jari;
    cout << "Luasnya adalah: " << luas_lingkaran() << endl;
    cout << "Kelilingnya adalah: " << keliling_lingkaran() << endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Motor{
    public:
    string merk;
    string warna;
    int cc;
    void cetakdata(){
        cout<<"Merk Motor = "<<merk<<endl;
        cout<<"Warna = "<<warna<<endl;
        cout<<"cc= "<<cc<<endl;
    }
};

int main() {
    Motor Yamaha;
    Yamaha.merk = "Aerox";
    Yamaha.warna = "Silver";
    Yamaha.cc = 155;
    Yamaha.cetakdata();
    return 0;
}

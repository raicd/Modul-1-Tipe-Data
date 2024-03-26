#include <iostream>
#include <string>
using namespace std;

struct handphone{
    string type;
    int berat;
    string warna;
    int harga;
};

int main(){
    handphone iphone;
   iphone.type = "13";
   iphone.warna = "black";
   iphone.berat = 174;
   iphone.harga = 8000000;
   
   cout<<"Spesifikasi Iphone 13"<<endl;
   cout<<"type ="<<iphone.type<<endl;
   cout<<"Warna ="<<iphone.warna<<endl;
   cout<<"Berat ="<<iphone.berat<<endl;
   cout<<"Harga ="<<iphone.harga<<endl;
  
  return 0;   
}


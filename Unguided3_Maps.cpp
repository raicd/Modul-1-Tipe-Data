#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    map<string,int> mp ={
        //key  //value
        {"Ronaldo",7},
        {"Messi",10},
        {"Neymar",11},
    };
    cout<< "Nomor Ronaldo:"<<mp["Ronaldo"]<<endl;
    cout<< "Nomor Messi:"<<mp["Messi"]<<endl;
    cout<< "Nomor Neymar:"<<mp["Neymar"]<<endl;

    return 0;

}
#include <iostream>

using namespace std;

int main(){
    string ad,soyad;
    int yash,bal;
    cout<<"Adı daxil edin";
    cin >> ad;
    cout << "Soyadınızı daxil edin";
    cin >> soyad;
    cout << "Yashınızı daxil edin";
    cin>> yash;
    cout<< "Balınızı daxil edin";
    cin>> bal;
    if (bal>=0 && bal<=50){
            cout<<"Kəsildin" <<endl;
    } else if(bal>=51 && bal<=100){
        cout<<"İmtahandan keçdin"<< endl;
       } else {
                cout<<"0-100 arası rəqəm daxil edin"<< endl;
        }
    return 0;
}


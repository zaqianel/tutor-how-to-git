#include <iostream>
using namespace std;

int main (){
    double Belanja ,Diskon ,Total;

    cout<<"---Kalkulator Kasir---\n";
    cout<<"masukan total belanja\t: ";
    cin>> Belanja;

    if (Belanja < 100000 ) {
        Diskon = 0 ;
    }else if (Belanja < 299999) {
        Diskon = 10;
    }else {
        Diskon = 20;
    }

    Total = Belanja - (Belanja * Diskon / 100 );

    cout << "\n========Ringkasan Pembayan========"<<endl;
    cout << "Diskon(" << Diskon << "%) : Rp"
         << Belanja * Diskon / 100 << endl;
    cout << "total bayar Rp :"<<Total << endl;

    return 0;
}
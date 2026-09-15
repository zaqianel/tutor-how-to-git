#include <iostream>
using namespace std;

int main (){
    int kode,uang,harga,kembalian;

    cout<<"1.air mineral : Rp.4.000\n";
    cout<<"2.Teh botol   : Rp.6.000\n";
    cout<<"3.Kopi susu   : Rp.10.000\n";
    
    cout<<"pilih kode :";
    cin>>kode;

    switch (kode)
    {
    case 1:harga = 4000; break;
    case 2:harga = 6000; break;
    case 3:harga = 10000; break;
    
    default:
    cout<<"Kode Tidak Valid!!";
        return 0;
    }

    cout<<" Masukan Uang : Rp ";
    cin>>uang;

    if (uang < harga){
        cout<<"transaksi gagal\n";
        cout<<"kekurangan Rp."<<harga-uang;
    }else {
        kembalian = uang - harga ;
        cout<<"transaksi berhasil\n";
        cout<<"kembalian Rp."<<kembalian <<endl;
        cout<<"Rp.5000 "<< kembalian / 5000 <<" lembar\n";
        cout<<"Rp.1000 "<< (kembalian % 5000 ) / 1000 <<" lembar\n";
    }
    return 0;
}
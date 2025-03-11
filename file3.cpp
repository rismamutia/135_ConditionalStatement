#include <iostream>
using namespace std;

float FungsiHitungLuasBerparameter(float a, float b){
    return a * b;
}

int main()
{
    float Panjang, Lebar;

    cout << "Masukkan panjangnya : ";
    cin >> Panjang;
    cout << "Masukkan lebarnya : ";
    cin >> Lebar;

    cout << "Luas Persegi Panjang : "
    << FungsiHitungLuasBerparameter(Panjang, Lebar);
}
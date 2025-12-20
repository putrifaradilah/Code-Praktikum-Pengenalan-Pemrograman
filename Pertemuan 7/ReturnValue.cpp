#include <iostream>
#include <cmath> //dibuthkan agar pow dapat dikenali
using namespace std;

double luasPersegi(double sisi){
    return pow(sisi, 2);
}

int main(){

    double sisi;
    cout << "Masukkan panjang sisi persegi : ";
    cin >> sisi;

    cout << "Luas persegi : " << luasPersegi(sisi);

    return 0;
}

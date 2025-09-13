/******************************************************************************
Buatlah program untuk melakukan operasi konversi suhu 
menggunakan percabangan switch case. Satuan suhu yang 
dikonversi celcius, Fahrenheit, reamur, dan kelvin. Tampilkan 
konversi suhu celcius ke Fahrenheit, suhu celcius ke reamur, suhu 
celcius ke kelvin. 
Rumus yang digunakan:
 Fah = ((9/5)*celcius)+32;
 Reamur = ((4/9)*celcius)-32;
 Kelvin = 273+celcius;
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    float n, suhu ;cout << "masukkan nilai suhu celcius : ";cin >> n;
    cout << "input F/R/K untuk konversi nilai celcius : ";
    char termo;
    cin >> termo;
    switch (termo) {
        case 'F' :
        suhu =(1.8*n) + 32;
        break;
        
        case 'R' :
        suhu = (4/9 *n) -32;
        break;
        
        case 'K' :
        suhu = 273+n ;
        break;
    }
    cout << "suhu setelah dikonversi adalah : " << suhu; 
}


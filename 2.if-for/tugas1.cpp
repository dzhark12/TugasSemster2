/******************************************************************************
Buatlah sebuah program untuk mencari bilangan terbesar, 
bilangan terkecil, jumlah bilangan ganjil, dan jumlah bilangan 
genap dari 5 buah data yang di inputkan oleh user. Gunakan 
percabangan dan perulangan. 
Input : 5 6 7 8 9 
Output :  
Bilangan terbesar adalah 9
 Bilangan terkecil adalah 5
 Jumlah bilangan ganjil adalah 3
 Jumlah bilangan genap adalah 2
*******************************************************************************/
#include <iostream>
using namespace std;


int main()
{
    int n, max, min, odd=0,even=0, angka;
    cout << "masukkan banyak angka " ;cin >> n;
    
    cout << "masukkan data ke-1 "; cin >> angka;
    min=max= angka;
    if(angka %2 == 0){
            even += 1;
        }else{
            odd += 1;
        }
        if (angka > max){
            max = angka;
        }if (angka < min){
            min = angka;
        }
    
    for(int i = 1 ; i < n ; i++){
        cout << "masukkan data ke-" << i+1 << " "; cin >> angka;
        if(angka %2 == 0){
            even += 1;
        }else{
            odd += 1;
        }
        if (angka > max){
            max = angka;
        }if (angka < min){
            min = angka;
        }
    }
    cout << "\nBilangan terbesar adalah : " << max;
    cout << "\nBilangan terkecil adalah : " << min;
    cout << "\nJumlah bilangan ganjil adalah : " << odd;
    cout << "\nJumlah bilangan genap adalah : " << even;

    return 0;
}


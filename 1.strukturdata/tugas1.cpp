/******************************************************************************
Buatlah program untuk menghitung nilai akhir dari satu 
mata kuliah! Nilai akhir matakuliah terdiri dari 30% UTS, 
35% UAS, dan 25% Tugas. 
▪ Input: nilai UTS, UAS, dan Tugas 
▪ Output: nilai akhir 

*******************************************************************************/

#include <iostream>
using namespace std;


int main()
{
    int UTS, UAS, Tugas, NilaiAkhir ;cout << "masukkan nilai uts :"; cin >> UTS;
    cout << "masukkan nilai uas :" ; cin >> UAS;
    cout << "masukkan nilai tugas :" ; cin >> Tugas;
    
    NilaiAkhir = 0.3*UTS + 0.35*UAS + 0.25*Tugas;
    cout << "Nilai Akhir Mahasiswa adalah : " << NilaiAkhir;

    return 0;
}

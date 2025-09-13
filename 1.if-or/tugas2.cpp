/******************************************************************************
Buatlah program yang menerima masukan N buah 
bilangan integer (dari keyboard), perulangan dimulai dari 
bilangan X.  
▪ Input: N, dan X 
▪ Output: rerata bilangan X s.d. X+N
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int X, sum=0;
    float rata, N ;
    cout << "masukkan banyaknya bilangan : " ; cin >> N;
    cout << "masukkan suku pertama bilangan : "; cin >> X;
    
    for (int i = X; i < X + N; i++){
        sum += i;
    }
    for (int i = X; i < X + N ; i++){
        cout << i << " " ;
    }
    cout << endl;
    rata = sum/N;
    cout<< "rata rata bilangan adalah sebesar : " << rata;

    return 0;
}


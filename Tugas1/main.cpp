/*
Program Penjumlahan, Pengurangan, Perkalian 2bilangan.
Menghitung Total dan Rata-Rata Element Array.
By  : Filipus Arif Kristiyan
Nim : A11.2022.14278
Kel : A11.4207
Tgl : 10 Maret 2023
*/

#include <iostream>

using namespace std;


int penjumlahan(int a, int b) {
    return a+b;
}


int pengurangan(int a, int b) {
    return a-b;
}


int perkalian(int a,int b) {
    return a*b;
}


int total(int myArray[], int jumlah){
    int hasil;
    for(int i=0; i < jumlah; i++){
        hasil += myArray[i];
    }
    return hasil;
}


float rata(float hasil,int jumlah){
    return hasil / jumlah;
}


void arr(int myArray[],int jumlah);


int main()
{

    //Kamus
    int a,b,jumlah;

    //Algoritma
    cout << "===============\t Program Penjumlahan, Pengurangan, dan Perkalian ==================" << endl;
    cout << "Masukkan bilangan pertama\t= ";
    cin >> a;
    cout << "Masukkan bilangan kedua\t\t= ";
    cin >> b;
    cout <<  "-----------------------------------\tHasil\t-----------------------------------" << endl;
    cout << a << " + " << b << " = " << penjumlahan(a,b) << endl;
    cout << a << " - " << b << " = " << pengurangan(a,b) << endl;
    cout << a << " * " << b << " = " << perkalian(a,b) << endl;


    cout << "==================== Program Total & Rata -Rata Element Array =====================" << endl;
    cout << "Masukkan jumlah element Array yang akan diinput : ";
    cin >> jumlah;                                                              //jumlah bilangan yang akan diinput
    int myArray[jumlah];
    for (int j=0;j<jumlah;j++){
        cout << "Masukkan bilangan indeks ke- [" << j << "] = ";
        cin >> myArray[j];
    }
    arr(myArray,jumlah);
    cout <<  "-----------------------------------\tHasil\t-----------------------------------" << endl;
    cout << "total \t\t: " << total(myArray,jumlah) << endl;
    cout << "Rata - Rata \t: "<< rata(total(myArray,jumlah),jumlah) ;
    return 0;
}

void arr(int myArray[],int jumlah){
    cout <<"Array[" << jumlah << "] = {";
    for (int i=0; i < jumlah; i++){
        cout << myArray[i];
        if (i < jumlah-1){
            cout << ",";
        } else {
            cout << "";
        }
    }
    cout << "}"<<endl;
}



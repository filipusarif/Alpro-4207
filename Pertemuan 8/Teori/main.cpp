/*
    Tugas Teori Pertemuan 8
    Nama : FIlipus Arif Kristiyan
    Nim  : A11.2022.14278
    Tgl  : 19 Mei 2023
*/

#include <iostream>

using namespace std;

int penjumlahan(int a){
    if(a==1)
        return 1;
    else
        return a+penjumlahan(a-1);
}

int pengurangan(int b){
    if(b==1)
        return 1;
    else
        return b-pengurangan(b-1);
}

int perkalian(int c){
    if(c==0)
        return 1;
    else
        return c*perkalian(c-1);
}

int perkalian2(int c,int n){
    if (n==0)
        return 0;
	else if (n > 0)
        return c + perkalian2(c, n - 1);
	else
        return (-c) + perkalian2(c, n+1);
}

int pembagian(int d){
    if(d==0)
        return 1;
    else
        return d/pembagian(d-1);
}

int fibonaci(int e){
    if(e==1)
        return 1;
    else if (e==0)
        return 0;
    else
        return fibonaci(e-1)+fibonaci(e-2);
}

int faktorial(int f){
    if(f==0)
        return 1;
    else
        return f*faktorial(f-1);
}


int main()
{
    int n;
    cout << "Masukkan Bilangan : ";
    cin >> n;
    cout << "Penjumlahan : " << penjumlahan(n) << endl;
    cout << "Pengurangan : " << pengurangan(n) << endl;
    cout << "Perkalian : " << perkalian(n) << endl;
    cout << "Perkalian 4 * " << n << " : " << perkalian2(4,n) << endl;
    cout << "Pembagian : " << pembagian(n) << endl;
    cout << "Fibonaci : " << fibonaci(n) << endl;
    for(int i=0; i<=n ;i++){
        cout << fibonaci(i) << " ";
    }
    cout << endl;
    cout << "Faktorial : " << faktorial(n) << endl;
    return 0;
}

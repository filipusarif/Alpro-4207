/*
    Tugas Teori Pertemuan 8
    Nama : FIlipus Arif Kristiyan
    Nim  : A11.2022.14278
    Tgl  : 19 Mei 2023
*/

#include <iostream>

using namespace std;

int penjumlahan(int a, int b);
int pengurangan(int b, int c);
int perkalian(int c,int n);
float pembagian(float d, int e);
int pangkat(int e, int f);
int fibonaci(int e);
int faktorial(int f);

int main()
{
    int n,m;
    cout << "-------------------------------------------------" << endl;
    cout << "| Program Fungsi Rekursif \t\t\t|" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Masukkan Bilangan Bulat Positif ke-1 \t: ";cin >> n;
    cout << "Masukkan Bilangan Bulat Positif ke-2 \t: ";cin >> m;
    cout << "=================================================" << endl;
    cout << "Penjumlahan "<< n << " + " << m << " \t\t: " << penjumlahan(n, m) << endl;
    cout << "Pengurangan "<< n << " - " << m << " \t\t: " << pengurangan(n, m) << endl;
    cout << "Perkalian "  << n << " * " << m << " \t\t: " << perkalian(n,m) << endl;
    cout << "Pembagian "  << n << " / " << m << " \t\t: " << pembagian(n,m) << endl;
    cout << "Pangkat "    << n << " ^ " << m << " \t\t\t: " << pangkat(n,m) << endl;
    cout << "Fibonaci index ke-" << n << " \t\t: " << fibonaci(n) << endl;
    for(int i=0; i<=n ;i++){
        cout << fibonaci(i) << " ";
    }
    cout << endl;
    cout << "Faktorial !" << n << " \t\t\t: " << faktorial(n) << endl;
    cout << "=================================================" << endl;
    return 0;
}

int penjumlahan(int a, int b){
    if (a > 0)
        return 1 + penjumlahan(a-1, b);
    else if (b > 0)
        return 1 + penjumlahan(a, b-1);
    else
        return 0;
}

int pengurangan(int b, int c){
    if (b > 0)
        return pengurangan(b-1, c) +1;
    else if (c > 0)
        return pengurangan(b, c-1) -1;
    else
        return 0;
}

int perkalian(int c,int n){
    if (n == 0)
        return 0;
	else if (n > 0)
        return c + perkalian(c, n - 1);
	else
        return (-c) + perkalian(c, n+1);
}

float pembagian(float d, int e){
    if( d < e )
        return d / e;
    else
        return 1 + pembagian(d-e, e);
}

int pangkat(int e, int f) {
    if(f == 0)
      return 1;
    else
      return e * pangkat(e,f-1);

}

int fibonaci(int e){
    if( e == 1 )
        return 1;
    else if (e==0)
        return 0;
    else
        return fibonaci(e-1) + fibonaci(e-2);
}

int faktorial(int f){
    if( f==0 )
        return 1;
    else
        return f * faktorial(f-1);
}


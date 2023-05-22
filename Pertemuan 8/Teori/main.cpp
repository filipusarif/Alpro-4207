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


int perkalian(int c,int n){
    if (n==0)
        return 0;
	else if (n > 0)
        return c + perkalian(c, n - 1);
	else
        return (-c) + perkalian(c, n+1);
}

int pembagian(int d, int e){
    if(d<e)
        return 0;
    else
        return 1+pembagian(d-e, e);
}

int pangkat(int e, int f) {
    if(f == 0)
      return 1;
    else
      return e*pangkat(e,f-1);

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

void keterangan(int n, int k);

int main()
{
    int n,m;
    cout << "-------------------------------------------------" << endl;
    cout << "| Program Fungsi Rekursif \t\t\t|" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Masukkan Bilangan ke-1 \t\t: ";cin >> n;
    cout << "Masukkan Bilangan ke-2 \t\t: ";cin >> m;
    cout << "=================================================" << endl;
    cout << "Penjumlahan ";
    keterangan(n,1);
    cout << " \t: " << penjumlahan(n) << endl;
    cout << "Pengurangan ";
    keterangan(n,2);
    cout << " \t: " << pengurangan(n) << endl;
    cout << "Perkalian " << n << " * " << m << " \t\t: " << perkalian(n,m) << endl;
    cout << "Pembagian " << n << " / " << m << " \t\t: " << pembagian(n,m) << endl;
    cout << "Pangkat "   << n << " ^ " << m << " \t\t\t: " << pangkat(n,m) << endl;
    cout << "Fibonaci ke-" << n << " \t\t\t: " << fibonaci(n) << endl;
    for(int i=0; i<=n ;i++){
        cout << fibonaci(i) << " ";
    }
    cout << endl;
    cout << "Faktorial !" << n << " \t\t\t: " << faktorial(n) << endl;
    cout << "=================================================" << endl;
    return 0;
}

void keterangan(int n, int k){
    if(k==1){
      for(int i=n; i>0 ;i--){
            cout << "(" << i;
            cout << (i>1? " + ": "");
        }
        for(int j=0; j<n ;j++){
            cout << ")";
        }
    }
     else {
        for(int i=n; i>0 ;i--){
            cout << "(" << i;
            cout << (i>1? " - ": "");
        }
        for(int j=0; j<n ;j++){
            cout << ")";
        }
     }
}

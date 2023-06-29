#include <bits/stdc++.h>
using namespace std;

typedef struct Rumus {
    public:
    int Luas_persegi_panjang (int panjang,int lebar){
        return panjang*lebar;
    }
    int Luas_lingkaran (int r){
        return (22 * r * r)/7;
    }
    float Volume_kerucut (int r,int t){
        return (1 * 3.14 * pow(r,2)*t)/3;
    }
    float Volume_bola (int r){
        return (4 * 3.14 * pow(r,3))/3;
    }
}hitung;

int main()
{
    hitung rumus1;
    int p,l,r,t;
    cout << "Masukkan Panjang : ";
    cin >> p;
    cout << "Masukkan Lebar : ";
    cin >> l;
    cout << "Masukkan Jari Jari : ";
    cin >> r;
    cout << "Masukkan Tinggi : ";
    cin >> t;

    cout << rumus1.Luas_persegi_panjang(p,l) << endl;
    cout << rumus1.Luas_lingkaran(r) << endl;
    cout << rumus1.Volume_kerucut(r,t) << endl;
    cout << rumus1.Volume_bola(r) << endl;
    
    return 0;
}
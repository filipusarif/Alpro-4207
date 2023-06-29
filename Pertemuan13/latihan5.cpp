#include <bits/stdc++.h>
using namespace std;

typedef struct sepeda{
    string merk,type,harga;
    int tahun;
}spd;

int main()
{
    spd sepeda={"0","0","0",0};
    spd *pSepeda;
    pSepeda = &sepeda;

    pSepeda->merk = "Polygon";
    pSepeda->type = "Sepeda Gunung";
    pSepeda->tahun = 2013;
    pSepeda->harga = "2.000.000";
    
    cout << "Merk = " << pSepeda->merk << endl;
    cout << "Type = " << pSepeda->type << endl;
    cout << "Tahun = " << pSepeda->tahun << endl;
    cout << "Harga = " << pSepeda->harga << endl;

    return 0;
}
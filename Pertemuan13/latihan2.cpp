#include <bits/stdc++.h>
using namespace std;

struct sepeda {
    string Merk = "Polygon";
    string Type = "Sepeda Gunung";
    int Tahun = 2013;
    string Harga = "2.000.000";
};

int main()
{
    sepeda sepeda1;
    cout << sepeda1.Merk << endl;
    cout << sepeda1.Type << endl;
    cout << sepeda1.Tahun << endl;
    cout << sepeda1.Harga << endl;
    
    return 0;
}
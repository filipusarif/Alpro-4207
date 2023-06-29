#include <bits/stdc++.h>
using namespace std;
enum Arah{UTARA,TIMUR,SELATAN,BARAT};

int main()
{
    int arah = 2;
    if(arah == Arah::UTARA)
        cout << "Mengarah ke Utara";
    else if(arah == Arah::TIMUR)
        cout << "Mengarah ke Timur";
    else if(arah == Arah::SELATAN)
        cout << "Mengarah ke Selatan";
    else if (arah == Arah::BARAT)
        cout << "Mengarah ke Barat";
    return 0;
}
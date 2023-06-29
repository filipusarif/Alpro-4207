#include <bits/stdc++.h>
using namespace std;

typedef struct mahasiswa {
    char nim[15],nama[10],jurusan[21];
    int lulus;
} mhs;


int main()
{
    //array statis
    mhs data[4];
    cout << "Array Statis" << endl;
    for(int i=0; i<4; i++){
        cout << "masukkan data baris ke-" << i+1 << endl; 
        cin >> data[i].nim >> data[i].nama >> data[i].jurusan >> data[i].lulus;
    }

    cout << "NIM \t\t Nama \t Jurusan \t Tahun Lulus" << endl; 
    for(int i=0; i<4; i++){
        cout << data[i].nim << "\t" << data[i].nama << "\t" << data[i].jurusan << "\t" << data[i].lulus << endl;
    }
    
    cout << "==================================================================" << endl;

    //array dinamis
    int n;
    cout << "Array Dinamis" << endl;
    cout << "Masukkan banyak element array :";
    cin >> n;
    mhs dataDin[n];
    for(int i=0; i<n; i++){
        cout << "masukkan data baris ke-" << i+1 << endl; 
        cin >> dataDin[i].nim >> dataDin[i].nama >> dataDin[i].jurusan >> dataDin[i].lulus;
    }

    cout << "NIM \t\t Nama \t Jurusan \t Tahun Lulus" << endl; 
    for(int i=0; i<n; i++){
        cout << dataDin[i].nim << "\t" << dataDin[i].nama << "\t" << dataDin[i].jurusan << "\t" << dataDin[i].lulus << endl;
    }
    return 0;
}

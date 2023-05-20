/*
    Tugas Soal UTS ALPRO
    Nama : FIlipus Arif Kristiyan
    Nim  : A11.2022.14278
    Tgl  : 19 Mei 2023
*/

#include <iostream>

using namespace std;

bool isGanjil(int a);
void genapTerkecil(int arr[], int n);
void tampilArray(int arr[], int n);
void bubbleSort(int arr[], int n);
void insertionSort(int arr[], int n);

int main()
{
    int A[] = {6,7,4,3,2};
    int n = sizeof(A)/sizeof(A[0]);
    genapTerkecil(A,n);

    int B[] = {1,4,5,2,1,3,2};
    int m = sizeof(B)/sizeof(B[0]);
    bubbleSort(B,m);
    insertionSort(B,m);
    return 0;
}

bool isGanjil(int a){
    return a%2==1;
}

void genapTerkecil(int arr[], int n){
    int min,index;
    //Mengambil Bilangan Genap index terdepan (menghindari error)
    for(int i=0; i<n ;i++){
        if(!isGanjil(arr[i])){
            min = arr[i];
            index = i;
            break;
        }
    }
    //cek Bilangan Genap terkecil
    for(int i=0; i<n ;i++){
        if(!isGanjil(arr[i])){
            if(arr[i]<min){
                min = arr[i];
                index = i;
            }
        }
    }

    cout << "Bilangan Genap terkecil : " << min << endl;
    cout << "Index : " << index << endl;

}

void tampilArray(int arr[], int n){
    for(int i=0; i<n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

//Bubble Sort
void bubbleSort(int arr[], int n){
    for(int i=0; i<n ;i++){
        for(int j=0; j<n-1 ;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout << "Bubble Sort : " << endl;
    tampilArray(arr,n);
}

//insertion Sort
void insertionSort(int arr[], int n){
    int i, key, j;
    for(int i=1; i<n ;i++){
        key = arr[i];
        j = i - 1;
        while (j>=0 &&  key > arr[j]){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }

    cout << "Insertion sort : " << endl;
    tampilArray(arr,n);
}

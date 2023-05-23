#include <iostream>
using namespace std;

bool isOdd(int num) {
    return num % 2 != 0;
}

void findSmallestEven(int arr[], int size) {
    int smallestEven = INT_MAX;
    int smallestIndex = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            smallestIndex = i;
        }
    }

    if (smallestIndex != -1) {
        cout << "Nilai genap terkecil: " << smallestEven << endl;
        cout << "Index: " << smallestIndex << endl;
    } else {
        cout << "Tidak ada nilai genap dalam deret bilangan." << endl;
    }
}
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Tukar elemen
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void cetak (int arry[],int size1){
     for (int i = 0; i < size1; i++) {
        cout << arry[i] << " ";
    }

}


void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int maxIndex = i;

        // Cari nilai maksimum dari i+1 hingga akhir array
        for (int j = i + 1; j < size; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }

        // Tukar elemen dengan nilai maksimum
        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}

int main() {

    int arr1[] = {5, 4, 3, 2, 2, 1, 1};
    int arr[] = {6, 7, 4, 3, 2};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"soal no 1"<<endl;
    findSmallestEven(arr, size);
    cout<<endl;

    cout<<"soal no 2"<<endl;
    bubbleSort(arr1,size1);
    cout << "Hasil pengurutan menggunakan Bubble Sort: ";
    cetak(arr1,size1);

    cout<<endl;
    selectionSort(arr1, size1);
    cout << "Hasil pengurutan menggunakan selection Sort: ";
    cetak(arr1,size1);
    cout<<endl;
    return 0;
}

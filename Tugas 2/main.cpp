/*  Program fungsi
    Nama  : Omar Rifqi Hadyan
    NIM   : A11.2022.14331
    Kel   : 4208
*/
#include <iostream>

using namespace std;

    //deklarasi fungsi & prosedur
    bool isEven (int x);
    bool isOdd (int x);
    bool isFactor(int x, int y);
    int maxN(int a,int b);
    int minN(int a, int b);
    int maxArray(int a[]);
    int minArray(int a[]);
    bool isFound(int x, int a[]);
    void swapN(int a,int b);


    int jumlah;
    void arr(int myArray[]);

int main()
{
    //Kamus
    int x,y,n;

    //Algoritma
    cout << "Masukkan nilai X : ";
    cin >> x;
    cout << "Masukkan nilai Y : ";
    cin >> y;
    cout << "hasil : " << endl;
    cout << "Apakah bilangan X = "<< x <<" genap ?\t: " << isEven(x) << endl;
    cout << "Apakah bilangan Y = "<< y <<" genap ?\t: " << isEven(y) << endl;
    cout << "Apakah bilangan X = "<< x <<" ganjil ?\t: " << isOdd(x) << endl;
    cout << "Apakah bilangan Y = "<< y <<" ganjil ?\t: " << isOdd(y) << endl;
    cout << "Apakah bilangan Y = "<< y <<" faktor dari bilangan X = "<< x <<" ?\t: " << isFactor(x,y) << endl;
    cout << "Apakah bilangan X = "<< x <<" faktor dari bilangan Y = "<< y <<" ?\t: " << isFactor(y,x) << endl;
    cout << "Manakah bilangan yang lebih besar ?, antara X = "<< x <<" dan Y = "<< y << "\t: "<< maxN(x,y) <<endl;
    cout << "Manakah bilangan yang lebih kecil ?, antara X = "<< x <<" dan Y = "<< y << "\t: "<< minN(x,y) <<endl;

    cout << "array : " << endl;
    cout << "masukkan Jumlah Element array = ";
    cin >> n;
    int a[n];
    for (int i=0; i<n ; i++){
        cout << "Masukkan bilangan index ke-["<<i<<"] : ";
        cin >> a[i];
    }
    jumlah = sizeof(a)/sizeof(int);
    cout << "hasil = " << endl;
    cout << "Berapa bilangan terbesar dalam ";arr(a);
    cout << " ?\t: " << maxArray(a) << endl;
    cout << "Berapa bilangan terkecil dalam ";arr(a);
    cout << " ?\t: " << minArray(a) << endl;
    cout << "Apakah bilangan X = "<< x << " ada dalam ";arr(a);
    cout << " ?\t: " << isFound(x,a) << endl;
    cout << "Apakah bilangan Y ="<< y << " ada dalam ";arr(a);
    cout << " ?\t: " << isFound(y,a) << endl;
    swapN(x,y);


    return 0;
}

bool isEven (int x) {
    return x % 2 == 0;
}

bool isOdd (int x){
    return x % 2 == 1;
}

bool isFactor(int x, int y){
    return x % y == 0;
}

int maxN(int a,int b){
    int m=0;
    if(a>b) {
        m=a;
    } else {
        m=b;
    }
    return m;
}

int minN(int a, int b){
    int m;
    if(a<b) {
        m=a;
    } else {
        m=b;
    }
    return m;
}

int maxArray(int a[]){
    int m=0;
    for (int i=0; i<jumlah ; i++){
        if(a[i]>m){
            m=a[i];
        }
    }
    return m;
}


int minArray(int a[]){
    int m=a[0];
    for (int i=0; i<jumlah ; i++){
        if(a[i]<m){
            m=a[i];
        }
    }
    return m;
}

bool isFound(int x, int a[]){
    bool m = false;
    for (int i=0; i<jumlah ; i++) {
        if (x == a[i]){
            m = true;
        }
    }
    return m;
}

void swapN(int a,int b){
    cout << "Tukar nilai bilangan X = "<< a <<" dan Y = "<< b << "\t\t\t: ";
    int temp = a;
    a = b;
    b = temp;
    cout << "X = " << a << " dan Y = "<< b;
}

void arr(int myArray[]){
    cout <<"Array[" << jumlah << "] = {";
    for (int i=0; i < jumlah; i++){
        cout << myArray[i];
        if (i < jumlah-1){
            cout << ",";
        } else {
            cout << "";
        }
    }
    cout << "}";
}

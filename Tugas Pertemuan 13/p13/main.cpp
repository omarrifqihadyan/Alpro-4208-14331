#include <iostream>
#include <vector>
#include <string>
using namespace std;

const double PI = 3.14;
//latihan 1
struct Bentuk {
    int panjang;
    int lebar;
    int jariJari;
    int tinggi;
};

// Menghitung luas persegi panjang
int hitungLuasPersegiPanjang(const Bentuk& persegiPanjang) {
    return persegiPanjang.panjang * persegiPanjang.lebar;
}

// Menghitung luas lingkaran
double hitungLuasLingkaran(const Bentuk& lingkaran) {
    return PI * lingkaran.jariJari * lingkaran.jariJari;
}

// Menghitung volume kerucut
double hitungVolumeKerucut(const Bentuk& kerucut) {
    return (1.0 / 3.0) * PI * kerucut.jariJari * kerucut.jariJari * kerucut.tinggi;
}

// Menghitung volume bola
double hitungVolumeBola(const Bentuk& bola) {
    return (4.0 / 3.0) * PI * bola.jariJari * bola.jariJari * bola.jariJari;
}
//latihan 2
struct mobil {
string merk = "HYUNDAI";
string type = "IONIC 5";
int tahun = 2022;
string harga ="600,000,000";

};
//latihan 3
const double PI = 3.14;

typedef struct {
    int luaspersegipanjang(int panjang, int lebar) {
        return panjang * lebar;
    }
    int luaslingkaran(int r) {
        return (22 * r * r) / 7;
    }
    double volumekerucut(int r, int t) {
        return (1.0 / 3.0) * PI * r * r * t;
    }
    double volumebola(int r) {
        return (4.0 * PI * r * r * r);
    }
} hitung;

//latihan 4
typedef struct Mahasiswa {
    char nim[15];
    char nama[10];
    char jurusan[21];
    int lulus;
} mhs;

//latihan 5
struct Sepeda {
    string merk;
    string type;
    int tahun;
    string harga;

    void printInfo() {
        cout << "Merk  : " << merk << endl;
        cout << "Type  : " << type << endl;
        cout << "Tahun : " << tahun << endl;
        cout << "Harga : " << harga << endl;
    }
};
//latihan 6

enum Arah { UTARA, TIMUR, SELATAN, BARAT };

enum Cuaca {
    CERAH,
    BERAWAN,
    HUJAN,
    BADAI
};
int main() {
    Bentuk persegiPanjang;
    persegiPanjang.panjang = 5;
    persegiPanjang.lebar = 3;

    Bentuk lingkaran;
    lingkaran.jariJari = 2;

    Bentuk kerucut;
    kerucut.jariJari = 4;
    kerucut.tinggi = 6;

    Bentuk bola;
    bola.jariJari = 2;

    cout<<"latihan 1 "<<endl;
    cout << "Luas Persegi Panjang: " << hitungLuasPersegiPanjang(persegiPanjang) << endl;
    cout << "Luas Lingkaran: " << hitungLuasLingkaran(lingkaran) << endl;
    cout << "Volume Kerucut: " << hitungVolumeKerucut(kerucut) << endl;
    cout << "Volume Bola: " << hitungVolumeBola(bola) << endl;

    cout << "Latihan 2" << endl;
    mobil mobilX;
    cout <<"Merk sepeda  :"<<mobilX.merk << endl;
    cout <<"Tipe sepeda  :"<<mobilX.type << endl;
    cout <<"Tahun sepeda :"<<mobilX.tahun << endl;
    cout <<"Harga sepeda :"<< mobilX.harga<< endl;


    cout<<"latihan 3"<<endl;
    hitung rumus;
    int p, r, t, l;
    cout << "Latihan 3" << endl;
    cout << "masukkan jari-jari (r) : ";
    cin >> r;
    cout << "masukkan panjang (p)   : ";
    cin >> p;
    cout << "masukkan lebar (l)     : ";
    cin >> l;
    cout << "masukkan tinggi (t)    : ";
    cin >> t;

    cout << "Luas persegi panjang : " << rumus.luaspersegipanjang(p, l) << endl;

    cout << "Luas lingkaran       : " << rumus.luaslingkaran(r) << endl;

    cout << "Volume kerucut       : " << rumus.volumekerucut(r, t) << endl;

    cout << "Volume bola          : " << rumus.volumebola(r) << endl;


    cout<<"latihan 4"<<endl;
     cout << "Array Statis" << endl;
    mhs data[4];
    for (int i = 0; i < 4; i++) {
        cout << "Masukkan data baris ke-" << i+1 << endl;
        cin >> data[i].nim >> data[i].nama >> data[i].jurusan >> data[i].lulus;
    }

    cout << "NIM \t\t Nama \t Jurusan \t Tahun Lulus" << endl;
    for (int i = 0; i < 4; i++) {
        cout << data[i].nim << "\t" << data[i].nama << "\t" << data[i].jurusan << "\t" << data[i].lulus << endl;
    }

    cout << "==================================================================" << endl;

    // array dinamis
    cout << "Array Dinamis" << endl;
    int n;
    cout << "Masukkan banyak elemen array: ";
    cin >> n;
    mhs* dataDin = new mhs[n];
    for (int i = 0; i < n; i++) {
        cout << "Masukkan data baris ke-" << i+1 << endl;
        cin >> dataDin[i].nim >> dataDin[i].nama >> dataDin[i].jurusan >> dataDin[i].lulus;
    }

    cout << "NIM \t\t Nama \t Jurusan \t Tahun Lulus" << endl;
    for (int i = 0; i < n; i++) {
        cout << dataDin[i].nim << "\t" << dataDin[i].nama << "\t" << dataDin[i].jurusan << "\t" << dataDin[i].lulus << endl;
    }

    delete[] dataDin;

    //latihan 5
    cout<<"latihan 5"<<endl;
    Sepeda sepeda;
    Sepeda* ptrSepeda = &sepeda;

    ptrSepeda->merk = "Polygon";
    ptrSepeda->type = "Sepeda Gunung";
    ptrSepeda->tahun = 2013;
    ptrSepeda->harga = "2.000.000";

    ptrSepeda->printInfo();


    //latihan 6
    cout<<"latihan 6 "<<endl;
    int main() {
     Cuaca cuacaHariIni = CERAH;
    if (cuacaHariIni == CERAH) {
        cout << "Cuaca cerah" << endl;
    } else if (cuacaHariIni == BERAWAN) {
        cout << "Cuaca berawan" << endl;
    } else if (cuacaHariIni == HUJAN) {
        cout << "Hujan" << endl;
    } else if (cuacaHariIni == BADAI) {
        cout << "Badai" << endl;
    }

    return 0;
}

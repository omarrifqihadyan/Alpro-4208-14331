#include <iostream>

int pembagianRekursif(int a, int b) {
  if (a < b) {
    return 0;
  } else {
    return 1 + pembagianRekursif(a - b, b);
  }
}

int main() {
  int angka1, angka2;
  std::cout << "Masukkan angka pertama: ";
  std::cin >> angka1;
  std::cout << "Masukkan angka kedua: ";
  std::cin >> angka2;

  int hasil = pembagianRekursif(angka1, angka2);
  std::cout << "Hasil pembagian: " << hasil << std::endl;

  return 0;
}

#include <iostream>

int penjumlahanRekursif(int n) {
  if (n == 1) {
    return 1;
  } else {
    return n + penjumlahanRekursif(n - 1);
  }
}

int main() {
  int angka;
  std::cout << "Masukkan angka: ";
  std::cin >> angka;

  int hasil = penjumlahanRekursif(angka);
  std::cout << "Hasil penjumlahan dari 1 hingga " << angka << " adalah: " << hasil << std::endl;

  return 0;
}

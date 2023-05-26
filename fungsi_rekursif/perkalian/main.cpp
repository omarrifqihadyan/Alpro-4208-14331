#include <iostream>

int perkalianRekursif(int a, int b) {
  if (b == 0) {
    return 0;
  } else {
    return a + perkalianRekursif(a, b - 1);
  }
}

int main() {
  int angka1, angka2;
  std::cout << "Masukkan angka pertama: ";
  std::cin >> angka1;
  std::cout << "Masukkan angka kedua: ";
  std::cin >> angka2;

  int hasil = perkalianRekursif(angka1, angka2);
  std::cout << "Hasil perkalian: " << hasil << std::endl;

  return 0;
}

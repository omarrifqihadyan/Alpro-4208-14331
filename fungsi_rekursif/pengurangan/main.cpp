#include <iostream>

int penguranganRekursif(int a, int b) {
  if (b == 0) {
    return a;
  } else {
    return penguranganRekursif(a - 1, b - 1);
  }
}

int main() {
  int angka1, angka2;
  std::cout << "Masukkan angka pertama: ";
  std::cin >> angka1;
  std::cout << "Masukkan angka kedua: ";
  std::cin >> angka2;

  int hasil = penguranganRekursif(angka1, angka2);
  std::cout << "Hasil pengurangan: " << hasil << std::endl;

  return 0;
}

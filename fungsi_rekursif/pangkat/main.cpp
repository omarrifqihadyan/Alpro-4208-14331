#include <iostream>

int pangkatRekursif(int basis, int eksponen) {
  if (eksponen == 0) {
    return 1;
  } else {
    return basis * pangkatRekursif(basis, eksponen - 1);
  }
}

int main() {
  int basis, eksponen;
  std::cout << "Masukkan basis: ";
  std::cin >> basis;
  std::cout << "Masukkan eksponen: ";
  std::cin >> eksponen;

  int hasil = pangkatRekursif(basis, eksponen);
  std::cout << "Hasil pangkat: " << hasil << std::endl;

  return 0;
}

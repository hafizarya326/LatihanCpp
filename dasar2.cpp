#include <iostream>
#include <string>

int main() {
    std::string nama;
    int umur;

    // 1. Komputer nanya nama
    std::cout << "Siapa namamu? ";
    std::cin >> nama;

    // 2. Komputer nanya umur
    std::cout << "Berapa umurmu? ";
    std::cin >> umur;

    // 3. Komputer menyapa!
    std::cout << "Halo " << nama << ", wah kamu sudah " << umur << " tahun ya!";

    return 0;
}

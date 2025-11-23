#include "Product.h"
#include <iostream>
using namespace std;

Product::Product() {
    kode = "";
    nama = "";
    harga = 0;
}

Product::Product(string k, string n, int h) {
    kode = k;
    nama = n;
    harga = h;
}

void Product::DisplayMessage() {
    cout << "[" << kode << "] " << nama << " - Rp" << harga << endl;
}


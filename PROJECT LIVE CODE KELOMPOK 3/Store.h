#ifndef STORE_H
#define STORE_H

#include "Product.h"

class Store {
public:
    Product* daftar[20];
    int jumlah;

    Store();
    void Tambah(Product* p);
    void Tampil();
    Product* Cari(string k);
};

#endif


#include "Store.h"
#include <iostream>
using namespace std;

Store::Store() {
    jumlah = 0;
}

void Store::Tambah(Product* p) {
    daftar[jumlah] = p;
    jumlah++;
}

void Store::Tampil() {
    for (int i = 0; i < jumlah; i++) {
        daftar[i]->DisplayMessage();
    }
}

Product* Store::Cari(string k) {
    for (int i = 0; i < jumlah; i++) {
        if (daftar[i]->kode == k)
            return daftar[i];
    }
    return NULL;
}


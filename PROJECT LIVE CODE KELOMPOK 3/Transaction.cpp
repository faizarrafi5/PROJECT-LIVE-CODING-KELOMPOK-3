#include "Transaction.h"
#include <iostream>
using namespace std;

Transaction::Transaction() {
    jumlahItem = 0;
}

void Transaction::Tambah(Product* p) {
    item[jumlahItem] = p;
    jumlahItem++;
}

void Transaction::Tampil() {
    int total = 0;

    cout << "\n======= DETAIL TRANSAKSI =======\n";
    for (int i = 0; i < jumlahItem; i++) {
        item[i]->DisplayMessage();
        total += item[i]->harga;
    }
    cout << "Total Belanja: Rp" << total << endl;
}


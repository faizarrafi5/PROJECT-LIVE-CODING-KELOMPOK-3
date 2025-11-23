#include <iostream>
#include "Food.h"
#include "Electronic.h"
#include "Store.h"
#include "Transaction.h"

using namespace std;

int main() {

    Store toko;

    toko.Tambah(new Food("F001", "Indomie Goreng", 3000, "12-12-2025"));
    toko.Tambah(new Food("F002", "Mie Sedap", 2800, "10-10-2025"));

    toko.Tambah(new Electronic("E001", "Kipas Angin", 150000, 12));
    toko.Tambah(new Electronic("E002", "Rice Cooker", 250000, 6));

    Transaction trx;

    int ulang = 1;
    string kode;

    while (ulang == 1) {

        cout << "\n======= DAFTAR PRODUK TOKO =======\n";
        toko.Tampil();

        cout << "\nMasukkan kode produk yang mau dibeli: ";
        cin >> kode;

        Product* p = toko.Cari(kode);

        if (p != NULL) {
            trx.Tambah(p);
            cout << "Produk ditambahkan ke transaksi!\n";
        } else {
            cout << "Kode tidak ditemukan!\n";
        }

        cout << "Beli lagi? (1 = ya, 0 = tidak): ";
        cin >> ulang;
    }

    trx.Tampil();

    return 0;
}


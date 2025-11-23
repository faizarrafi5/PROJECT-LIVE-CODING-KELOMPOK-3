#include <iostream>
#include <string>
using namespace std;

// ======================================
// CLASS PRODUCT (INDUK)
// ======================================
class Product {
public:
    string kode;
    string nama;
    int harga;

    Product();
    Product(string k, string n, int h);

    virtual void DisplayMessage(); // <-- POLYMORPHISM DISINI (VIRTUAL)
};

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


// ======================================
// CLASS FOOD (CHILD) - OVERRIDE (POLYMORPHISM)
// ======================================
class Food : public Product {
public:
    string expired;

    Food();
    Food(string k, string n, int h, string e);

    void DisplayMessage(); // <-- override dari virtual
};

Food::Food() : Product() {
    expired = "";
}

Food::Food(string k, string n, int h, string e)
    : Product(k, n, h)
{
    expired = e;
}

void Food::DisplayMessage() {
    cout << "[" << kode << "] " << nama
         << " (Makanan) - Rp" << harga
         << " | Exp: " << expired << endl;
}


// ======================================
// CLASS ELECTRONIC (CHILD) - OVERRIDE
// ======================================
class Electronic : public Product {
public:
    int garansi;

    Electronic();
    Electronic(string k, string n, int h, int g);

    void DisplayMessage(); // <-- override polymorphism
};

Electronic::Electronic() : Product() {
    garansi = 0;
}

Electronic::Electronic(string k, string n, int h, int g)
    : Product(k, n, h)
{
    garansi = g;
}

void Electronic::DisplayMessage() {
    cout << "[" << kode << "] " << nama
         << " (Elektronik) - Rp" << harga
         << " | Garansi: " << garansi << " bln" << endl;
}


// ======================================
// CLASS STORE
// ======================================
class Store {
public:
    Product* daftar[20];
    int jumlah;

    Store();
    void Tambah(Product* p);
    void Tampil();
    Product* Cari(string k);
};

Store::Store() {
    jumlah = 0;
}

void Store::Tambah(Product* p) {
    daftar[jumlah] = p;
    jumlah++;
}

void Store::Tampil() {
    int i;
    for (i = 0; i < jumlah; i++)
        daftar[i]->DisplayMessage(); // <-- POLYMORPHISM AKTIF DI SINI
}

Product* Store::Cari(string k) {
    int i;
    for (i = 0; i < jumlah; i++) {
        if (daftar[i]->kode == k)
            return daftar[i];
    }
    return NULL;
}


// ======================================
// CLASS TRANSACTION
// ======================================
class Transaction {
public:
    Product* item[20];
    int jumlahItem;

    Transaction();
    void Tambah(Product* p);
    void Tampil();
};

Transaction::Transaction() {
    jumlahItem = 0;
}

void Transaction::Tambah(Product* p) {
    item[jumlahItem] = p;
    jumlahItem++;
}

void Transaction::Tampil() {
    int total = 0;
    int i;

    cout << "\n======= DETAIL TRANSAKSI =======\n";
    for (i = 0; i < jumlahItem; i++) {
        item[i]->DisplayMessage(); // <-- POLYMORPHISM AKTIF LAGI
        total += item[i]->harga;
    }
    cout << "Total Belanja: Rp" << total << endl;
}


// ======================================
// MAIN PROGRAM
// ======================================
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


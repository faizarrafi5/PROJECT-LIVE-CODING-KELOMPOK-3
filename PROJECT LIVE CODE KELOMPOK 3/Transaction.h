#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "Product.h"

class Transaction {
public:
    Product* item[20];
    int jumlahItem;

    Transaction();
    void Tambah(Product* p);
    void Tampil();
};

#endif


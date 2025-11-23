#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;

class Product {
public:
    string kode;
    string nama;
    int harga;

    Product();
    Product(string k, string n, int h);

    virtual void DisplayMessage();
};

#endif


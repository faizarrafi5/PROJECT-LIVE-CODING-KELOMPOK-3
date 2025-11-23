#include "Electronic.h"
#include <iostream>
using namespace std;

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


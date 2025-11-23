#include "Food.h"
#include <iostream>
using namespace std;

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


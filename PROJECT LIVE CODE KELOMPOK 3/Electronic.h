#ifndef ELECTRONIC_H
#define ELECTRONIC_H

#include "Product.h"

class Electronic : public Product {
public:
    int garansi;

    Electronic();
    Electronic(string k, string n, int h, int g);

    void DisplayMessage();
};

#endif


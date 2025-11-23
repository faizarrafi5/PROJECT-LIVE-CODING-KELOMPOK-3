#ifndef FOOD_H
#define FOOD_H

#include "Product.h"

class Food : public Product {
public:
    string expired;

    Food();
    Food(string k, string n, int h, string e);

    void DisplayMessage() override;
};

#endif


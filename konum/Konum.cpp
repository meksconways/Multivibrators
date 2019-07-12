//
// Created by macbook  on 2019-07-11.
//

#include "Konum.h"
#include <string.h>

Konum::Konum(int x, int y) : x(x), y(y) {}

const int &Konum::getX() {
    return x;
}

const int &Konum::getY() {
    return y;
}

void Konum::setX(const int &value) {
    this -> x = value;
}

void Konum::setY(const int &value) {
    this -> y = value;
}

string Konum::toString() {
    return "X: " + to_string(x) + " - Y: " + to_string(y);
}


Konum::Konum(){
    this -> x = 0;
    this-> y = 0;
}

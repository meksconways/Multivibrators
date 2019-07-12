//
// Created by macbook  on 2019-07-11.
//

#ifndef MULTIVIBRATORS_KONUM_H
#define MULTIVIBRATORS_KONUM_H

#include <string>

using namespace std;

class Konum {

private:
    int x,y;

public:

    const int &getX();
    const int &getY();

    void setX(const int &value);
    void setY(const int &value);

    string toString();

    Konum();

    Konum(int x, int y);

};


#endif //MULTIVIBRATORS_KONUM_H

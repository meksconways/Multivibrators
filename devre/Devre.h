//
// Created by macbook  on 2019-07-11.
//

#ifndef MULTIVIBRATORS_DEVRE_H
#define MULTIVIBRATORS_DEVRE_H

#include <vector>
#include "../devreelemani/DevreElemani.h"
#include "../eleman/Eleman.h"

using namespace std;

class Devre {

private:

    static Devre *devre;
    static vector<DevreElemani*> elemanlar;

public:
    Devre();

    static Devre *olustur();
    static DevreElemani* elemanEkle(Eleman *eleman);
    int getElemanSize() const;


};


#endif //MULTIVIBRATORS_DEVRE_H

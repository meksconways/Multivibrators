//
// Created by macbook  on 2019-07-11.
//

#include <iostream>
#include "Devre.h"

Devre::Devre() {}

Devre* Devre::devre = nullptr;
vector<DevreElemani*> Devre::elemanlar;



Devre *Devre::olustur() {

    if (devre == nullptr){
        devre = new Devre();
        elemanlar = vector<DevreElemani*>();
    }

    return devre;


}

DevreElemani *Devre::elemanEkle(Eleman *eleman) {

    DevreElemani *temp = nullptr;

    /**
     * parametredeki elemani listedeki mevcut elamanlarla karşılaştır.
     * listede aynısı varsa yaratmaz, yoksa yeni bir tane yaratıp listeye ekler ve
     * yeni elamanı geriye döndürür
     **/

    int size = elemanlar.size() - 1;

    for (int i = 0; i <= size; i++){

        if (((Eleman*) elemanlar.at(i))->compareTo(eleman) == 1){
            temp = eleman;
            break;
        }

    }

    // eleman bulunamamışsa yeniden oluşturulur ve listeye eklenir

    if (temp == nullptr){
        temp = new Eleman(
                eleman->getTur(),
                eleman->getDetay(),
                eleman->getKonum()
                );
        elemanlar.push_back(temp);

    }

    return temp;




}

int Devre::getElemanSize() const {
    return elemanlar.size();
}

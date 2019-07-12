//
// Created by macbook  on 2019-07-11.
//

#include <iostream>
#include "Eleman.h"

using namespace std;

const ElemanTurleri &Eleman::getTur() const {
    return this -> elemanTurleri;
}

const void Eleman::setTur(const ElemanTurleri &value) {
    this -> elemanTurleri = value;
}

const string &Eleman::getDetay() const {
    return this->detay;
}

const void Eleman::setDetay(const string &value) {
    this->detay = value;
}

Konum *Eleman::getKonum() const {
    return this->konum;
}

void Eleman::setKonum(Konum *value) {
    this->konum = value;
}

void Eleman::Render() {

    cout<<konum->toString() << " konumundaki "<<detay<<" render edildi"<<endl;

}

int Eleman::compareTo(Eleman *obj) {

    if (obj->getTur() == this->elemanTurleri){
        return 1;
    }

    return 0;
}

Eleman::Eleman() {
    this->konum = new Konum(0,0);
    this->detay = " ";
    this->elemanTurleri = ElemanTurleri::Direnc;
}

Eleman::Eleman(ElemanTurleri elemanTurleri, const string &detay, Konum *konum) {

    this->elemanTurleri = elemanTurleri;
    this->detay = detay;
    this->konum = konum;


}





//
// Created by macbook  on 2019-07-11.
//

#ifndef MULTIVIBRATORS_ELEMAN_H
#define MULTIVIBRATORS_ELEMAN_H


#include "../devreelemani/DevreElemani.h"
#include "ElemanTurleri.h"
#include "../konum/Konum.h"
#include <string>

using namespace std;

class Eleman : public DevreElemani{
public:
    Eleman(ElemanTurleri elemanTurleri, const string &detay, Konum *konum);
    Eleman();

private:
    ElemanTurleri elemanTurleri;
    string detay;
    Konum *konum;

public:
    const ElemanTurleri &getTur() const;
    const void setTur(const ElemanTurleri &value);

    const string &getDetay() const;
    const void setDetay(const string &value);

    Konum* getKonum() const;
    void setKonum(Konum *value);

    void Render() override;

    int compareTo(Eleman *obj);





};


#endif //MULTIVIBRATORS_ELEMAN_H

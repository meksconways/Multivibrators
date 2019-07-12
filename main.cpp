#include <iostream>
#include "devre/Devre.h"

using namespace std;

int main() {

     // test
    try {

        Devre *multivibrator = Devre::olustur();

        Eleman *e1 = new Eleman(ElemanTurleri::Direnc,"R1 100",new Konum(1,1));
        e1->Render();
        Devre::elemanEkle(e1);

        Eleman *e2 = new Eleman(ElemanTurleri::Direnc,"R2 22K",new Konum(1,2));
        e2->Render();
        Devre::elemanEkle(e2);

        Eleman *e3 = new Eleman(ElemanTurleri::Direnc,"R3 100",new Konum(1,3));
        e3->Render();
        Devre::elemanEkle(e3);

        Eleman *e4 = new Eleman(ElemanTurleri::Direnc,"R4 470",new Konum(1,4));
        e4->Render();
        Devre::elemanEkle(e4);

        Eleman *e5 = new Eleman(ElemanTurleri::Led,"Led1",new Konum(2,1));
        e5->Render();
        Devre::elemanEkle(e5);

        Eleman *e6 = new Eleman(ElemanTurleri::Led,"Led2",new Konum(2,4));
        e6->Render();
        Devre::elemanEkle(e6);

        Eleman *e7 = new Eleman(ElemanTurleri::Kondansator,"CL 100",new Konum(3,1));
        e7->Render();
        Devre::elemanEkle(e7);

        Eleman *e8 = new Eleman(ElemanTurleri::Direnc,"R5 47k",new Konum(3,3));
        e8->Render();
        Devre::elemanEkle(e8);

        Eleman *e9 = new Eleman(ElemanTurleri::Transistor,"T1 BC-547",new Konum(4,1));
        e9->Render();
        Devre::elemanEkle(e9);

        Eleman *e10 = new Eleman(ElemanTurleri::Transistor,"T1 BC-547",new Konum(4,4));
        e10->Render();
        Devre::elemanEkle(e10);



        cout<<"Üretilen farklı eleman sayısı :"<<multivibrator->getElemanSize()<<endl;

        return 1;


    }catch (exception e){
        cout<<e.what()<<endl;
    }



}
#include <iostream>
using namespace std;
class hayvan {
public:
    virtual void konus() {//saf sanal fonksiyon 
        cout << "Ben bir hayvanım." << endl;
    };
};        //turetilmiş alt sınıflar
class inek : public hayvan {
public:
    void konus() { cout << "Mööö" << endl; }
};
class kedi :public hayvan {
public:
    void konus() { cout << "Miyavvv" << endl; }
};
class kopek :public hayvan {
public:
    void konus() { cout << "Hav Hav " << endl; }
};
//ana program
int main() {
    hayvan* a[3];
    a[0] = new kedi();
    a[1] = new kopek();
    a[2] = new inek();
    for (int i = 0; i < 3; i++) {
        a[i]->konus();//*a[i].konus();
    }
}//!!NOT: BU ORNEKTE *a[i] pointer dizisine erişim için ok "->" operatoru kullanık. Burada a[i]->konus(); ile *a[i].konus(); aynı işleve sahiptir.//


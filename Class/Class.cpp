#include<string>
#include<iostream>
using namespace std;

//araba sinifi
class Araba
{

private:			//sinif degiskeni
    string marka;

    string renk;

    int motor;

    int kapasite;

public:			////üye fonksiyonlar
    void calis(string ma, string r, int m, int k)
    {

        marka = ma;

        renk = r;

        motor = m;

        kapasite = k;

    }
    void yaz()
    {

        cout << marka << "\t" << renk << "\t" << motor << "\t" << kapasite <<
            "\t" << endl;

    }
};				//araba sınıfı sonu  

int
main()
{

    ///araba sınıfından nesnekere türet
    Araba kamyon, taksi;

    //veri girişi(değer aktarma)
    kamyon.calis("BMC", "KD1rmD1zD1", 3000, 9000);

    taksi.calis("BMW", "Mor", 1500, 29000);

    //degerler ekrana basılır
    kamyon.yaz();

    taksi.yaz();

}

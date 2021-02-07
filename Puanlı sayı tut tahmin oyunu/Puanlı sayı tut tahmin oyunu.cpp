#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


static int tut;


void
tahmin(int a)
{				//tahmin fonksiyonunu tanimlama
    int tahmin, sayac = 0, puan = 100;

    cout << "ilk tahminizi giriniz: " << endl;

    do
    {				//donguye girebilmesi icin do 
        cin >> tahmin;

        sayac++;

        if (tahmin == a)
        {			//kullanıcının girdigi sayi esitse pc'e yazdir
            cout << "Bravo! " << sayac << " tahminde bildiniz\n";


        }

        else if (tahmin < a)
        {			//kucukse daha buyuk  sayi giriniz de "
            cout << "Daha buyuk bir sayi giriniz!\n";

        }

        else			//degilse daha kucuktur diye ve puan -10 azalt 
            cout << "Daha kucuk bir sayi giriniz: \n";

        puan -= 10;

        

    }

    while (tahmin != a);		//eger tahminim ile sayi esitse 
    cout << "\nPUANINIZ:" << puan;

}


int
main()
{				//main baslangici
    srand(time(0));

    tut = (1 + (int)rand() % 100);

    tahmin(tut);

    return 0;

}



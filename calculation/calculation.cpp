#include <iostream>
#include <ctype.h>
using namespace std;


void
menu()
{				//menu fonksiyonu tanimladim
    cout << ("\n[1]-Toplama\n");

    cout << ("\n[2]-Cikarma\n");

    cout << ("\n[3]-Carpma\n");

    cout << ("\n[4]-Bolme\n");
	

}

//hesaplama fonksiyonu tanimladim.
double
Hesapla(int a, int b, int op)
{

    switch (op)
    {

    case 1:
        return a + b;

        break;

    case 2:
        return a - b;

        break;

    case 3:
        return a * b;

        break;

    case 4:
        return (float)a / b;

        break;

    }

    return 0;

}


//ana fonksiyonu tanD1mlD1yorum.
int
main()
{

    int a, b, islem;


    char cvp;


    double sonuc;

    do
    {

        menu();			//menu fonksiyonu Cagiriyorum.

        cout << ("\niki sayi giriniz: \n");

        cin >> a >> b;


        cout << ("\nislem sec:  ");

        cin >> islem;


        sonuc = Hesapla(a, b, islem);


        cout << "\nSonuc= " << sonuc << endl;


        cout << "Devam mi?[E/H]?";

        cin >> cvp;


    } while (tolower(cvp) == 'e');

    return 0;

}





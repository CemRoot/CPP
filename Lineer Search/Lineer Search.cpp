#include <iostream>
#include <stdlib.h>
using namespace std;

int
main()
{

    int a[10] = { 2, 3, 4, 5, 6, 7, 8, 9, 88, 99 };

    int i, aranan, bayrak = 0;;

    cout << "Aranan sayi:";

    cin >> aranan;

    //dogursal arama işlemi
    for (i = 0; i < 10; i++)
    {

        if (aranan == a[i])
        {

            cout << "Aranan " << i + 1 << ".siralamada bulundu";

            bayrak = 1;
            break;

        }

    }				//for sonu
    if (bayrak == 0)
    {

        cout << "aranan bulunamadi!" << endl;


    }

    return 0;

}



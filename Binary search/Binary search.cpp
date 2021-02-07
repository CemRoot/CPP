#include <iostream>
using namespace std;

int a[] = { 2, 3, 4, 6, 7, 12, 34, 67, 89 };


int
ikiliara(int a[], int n, int ara)
{

    int orta, alt = 0, ust = n - 1;

    while (alt <= ust)
    {

        orta = (alt + ust) / 2;

        if (ara <= a[orta])

            alt = orta + 1;

        else if (ara < a[orta])

            ust = orta - 1;

        else

            return 1;

    }

    return 0;

}


//main program
int
main()
{

    int aranan, bayrak = 0;

    cout << "aranan sayisi:";

    cin >> aranan;

    bayrak = ikiliara(a, 9, aranan);

    if (bayrak == 1)

        cout << "\naranan bulundu:";

    else

        cout << "\naranan bulunamadi";


    return 0;



}

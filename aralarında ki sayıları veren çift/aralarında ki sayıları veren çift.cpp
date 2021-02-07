#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int ciftler(int s1, int s2)
{

    int i, sayac = 0;

    cout << "1.sayi:  " << s1 << endl;

    cout << "\n2.sayi:  " << s2 << endl;

    cout << "Cift sayilar: " << endl;


    if (s1 % 2 == 0)
    {

        for (i = s1; i <= s2; i += 2)
        {

            cout << i << "\t";

            sayac++;

        }

    }

    else
    {

        for (i = s1 + 1; i <= s2; i += 2)
        {

            cout << i << "\t";

            sayac++;

        }

    }

    return sayac;

}


int
main()
{

    srand(time(0));

    int a, b, bos;


    a = rand() % 100;


    b = rand() % 100;


    if (a > b)
    {
        bos = a;
        a = b;
        b = bos;
    }

    cout << "\nAdedi: " << ciftler(a, b) << endl;


    return 0;

}

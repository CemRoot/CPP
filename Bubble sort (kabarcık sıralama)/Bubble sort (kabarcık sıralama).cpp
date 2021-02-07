#include <iostream>
#include <ctime>
#include<cstdlib>
using namespace std;

int i, j, enk, a[13];

//bubble sorta gore siralama
void
bubblesort(int a[])
{

    for (i = 0; i < 12; i++)
    {

        for (j = i + 1; j < 13; j++)
        {

            if (a[i] > a[j])
            {

                enk = a[i];

                a[i] = a[j];

                a[j] = enk;

            }

        }

    }

}				//fonk sonu

int
main()
{

    srand(time(0));

    cout << "Dizinin sırasiz hali:\n";

    for (i = 0; i < 13; i++)
    {

        int x = 1 + rand() % 99;

        a[i] = x;

        cout << a[i] << "  ";

    }
    bubblesort(a);

    cout << "\nDizinin sirali hali:\n";

    for (i = 0; i < 13; i++)
    {

        cout << a[i] << " ";

    }

    cout << "\nEn kucuk:" << a[0] << endl;

    cout << "\nEn buyuk:" << a[12] << endl;

    return 0;




}

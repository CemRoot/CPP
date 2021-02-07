#include <iostream>
using namespace std;

//global degısken dizi tanımlamaları
const int n = 10;

int a[n] = { 2, 5, 6, 1, 78, 43, 23, 89, 9, 14 };


//Insertion sort fonk
void
insertionsort(int a[])
{

    int i, ekle;

    for (i = 1; i < n; i++)
    {

        ekle = a[i];

        while (i > 0 && (a[i - 1] < ekle))
        {

            a[i] = a[i - 1];

            i -= 1;

        }

        a[i] = ekle;

    }

}


//ana program
int
main()
{

    insertionsort(a);

    cout << "a dizinin sıralı hali..\n" << endl;

    for (int i = 0; i < n; i++)
    {

        cout << a[i] << " ";

    }
    return 0;

}

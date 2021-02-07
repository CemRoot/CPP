#include <iostream>
using namespace std;

void
quickshort(char a[], int sol, int sag)
{

    int i = sol, j = sag;

    int tmp;

    int pivot = a[(sol + sag) / 2];

    //ayirma işlemi
    while (i <= j)
    {

        while (a[i] < pivot)
            i++;

        while (a[i] > pivot)
            j--;

        if (i <= j)
        {

            tmp = a[i];

            a[i] = a[j];

            a[j] = tmp;

            i++;

            j--;

        }

    }

    //ozyenileme
    if (sol < j)

        quickshort(a, sol, j);

    if (i < sag)

        quickshort(a, i, sag);

}

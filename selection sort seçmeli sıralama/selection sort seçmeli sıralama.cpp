#include <iostream>
using namespace std;

const int n = 10;

int a[n] = { 2, 5, 6, 1, 78, 43, 32, 89, 9, 14 };


//selection sırlama fonks 
void
selectionsort(int a[])
{

    int i, j, bos, enk;

    for (i = 0; i < n - 1; i++)
    {

        enk = i;			//ilk eleman en küçük seçildi
        for (j = i + 1; j < n; j++)
        {

            if (a[enk] > a[j])
            {

                enk = j;		//yeni kücük eleman
            }



        }			//for j sonu;
              //yer değiştirme
        bos = a[i];

        a[i] = a[enk];

        a[enk] = bos;

    }				//for i nin sonu;           
}				//fonk bitis

//ana program
int
main()
{

    selectionsort(a);

    cout << "a dizinin sıralı hali" << endl;

    for (int i = 0; i < n; i++)
    {

        cout << a[i] << " ";

    }
    return 0;

}

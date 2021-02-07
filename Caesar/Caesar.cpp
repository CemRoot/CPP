#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int
main()
{

    char k[20];

    cout << "Word:";

    cin >> k;

    int n = strlen(k);

    strupr(k);			//girilen büyük-harfe dönüştürür// converts the entered uppercase letter
    cout << "\nEncrypted word:  ";

    for (int i = 0; i < n; i++)
    {

        k[i] == 3 + k[i];

        cout << k[i];

    }
    return 0;

}

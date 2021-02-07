#include <iostream>
using namespace std;


int
main()
{

    int a, b;

    cout << "a ve b sayinizi giriniz: \n";

    cin >> a;

    cin >> b;

    if (a > b)

        cout << "a buyuktur!";

    if (a < b)

        cout << "b buyuktur!";

    if (a == b)

        cout << "sayilar birbirine esittir!";

}
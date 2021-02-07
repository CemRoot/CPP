#include <iostream>
#include <stdlib.h>
using namespace std;

int
main()
{

    int i, kart[17], say = 0, toplam = 0;

    char cr;

    cout << "Enter Your Credit Card: \n";

    while (true)			//sonsuz dongu
    {
        cin >> cr;

        if (cr >= '0' && cr <= '9')
        {

            kart[say] = cr - '0';

            say++;

        }

        else

            cout << "YOU WERE WRONG CHARACTER!";

        if (say == 17)

            break;

    }

    for (i = 0; i < 16; i += 2)
    {

        kart[i] = kart[i] * 2;

        if (kart[i] > 9)

            kart[i] = kart[i] % 10 + kart[i] / 10;

    }

    for (i = 0; i < 16; i++)
    {

        toplam += kart[i];

    }


    if (toplam % 10 == 0)

        cout << "NUMBER IS CORRECT.\n";

    else

        cout << "NUMBER INVALID.\n";


    return 0;

}





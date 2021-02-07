#include <iostream>
#include <string.h>
using namespace std;

int
main()
{

    string password;

    int try_ = 0;

    cout << "You have 3 attempts, it will be blocked if you enter wrong\n";

    do
    {


        cout << "Enter your password: ";

        cin >> password;

        if (password.compare("apple") == 0)
        {

            cout << "CORRECT!";


            break;

        }
        try_++;

    }

    while (try_ < 3);

    if (try_ >= 3)

        cout << "BLOCKED YOUR ACCOUNT";

    return 0;


}

#include <iostream>
#include <string>
using namespace std;

int
main()
{

    string str;

    int i;

    cout << "Word: ";

    cin >> str;

    //13 ROT
    for (i = 0; i < str.length(); i++)
    {

        char c = str.at(i);


        if (c >= 'a' && c <= 'm')
            c += 13;

        else if (c >= 'A' && c <= 'M')
            c += 13;

        else if (c >= 'n' && c <= 'z')
            c -= 13;

        else if (c >= 'N' && c <= 'Z')
            c -= 13;

        cout << c;

    }

    return 0;


}

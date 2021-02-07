#include <iostream>
#include <cstring>		//strlen icin
#include <algorithm>		//sort() icin
using namespace std;

char a[] = { 'k', 'o', 'y', 'l', 'u', 'o', 'g', 'l', 'u' };


void
goster(char a[])
{

    for (int i = 0; i < strlen(a); ++i)

        cout << a[i] << " ";


}

//ana program
int
main()
{

    cout << "orginal diizimiz\n";

    goster(a);

    //sirala
    sort(a, a + strlen(a));

    cout << "\nsD1ralD1 hali:";

    goster(a);

    return 0;

}

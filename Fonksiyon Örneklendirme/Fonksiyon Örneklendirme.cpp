#include <iostream>
using namespace std;

int s1 = 4;//global değişken

//referansını aktar
void RefFonk(int& s1) {
    s1 = 8;
}

//değerini aktar
void DegFonk(int s1) {
    s1 = 8;
}

//ana program
int main() {
    cout << "degerini al-isle";

    DegFonk(s1);

    cout << "\n s1: " << s1;

    cout << "\nreferansini al-iste";

    RefFonk(s1);

    cout << "\n s1: " << s1;

    return 0;

}
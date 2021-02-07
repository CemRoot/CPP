#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;


int
main()
{

	srand(time(0));		//her defasında farklı bir sayı uretmek
	char ch = 'H';		//ch değişkenine baslangıc degerı atandı
	//kazanma/kaybetme degerlerının tutuldugu degısken
	int kzn = 0;			//kazanma
	int brb = 0;			//berabere
	int kyp = 0;			//kaybetme

	int secim;

	cout << "-------------------------------------------------\n";

	cout << "-- TAS - KAGIT - MAKAS OYUNU --\n";

	cout << "-------------------------------------------------\n";

	//oyundan cıkmak istemediğin sürece (ch=="E") sürece devam et!
	do
	{

		cout << ("TAS-1\nKAGIT-2\nMAKAS-3\nSECIMINIZ: ");

		cin >> secim;		//benim secimim

		int pcScm = (int)(rand() % 3) + 1;	//pc secimi
		cout << "bilgisayariniz secimi:" << pcScm << endl;

		//oyuncunun beraberlik haricinden 3 kaznama veya 3 kaybetme ihtimali var

		if (secim == pcScm)
		{

			cout << "ikinizde ayni seyi sectiniz, BERABERE!";

			brb += 1;

		}

		else if (secim == 3 && pcScm == 2)
		{

			cout << "Makas, kagıdı keser! (SEN KAZANDIN!)";

			kzn += 1;

		}

		else if (secim == 1 && pcScm == 3)
		{

			cout << "Tas, makasi kirar! (SEN KAZANDIN!)";

			kzn += 1;

		}

		else if (secim == 2 && pcScm == 1)
		{

			cout << "Kagit tasi sarar! (SEN KAZANDIN!)";

			kzn += 1;

		}

		else if (secim == 2 && pcScm == 1)
		{

			cout << "Makas,kagidi keser! (PC KAZANDI!)";

			kyp += 1;
			
		}

		else if (secim == 3 && pcScm == 1)
		{

			cout << "Tas, makasi kirar! (PC KAZANDI!)";

			kyp += 1;
			
		}

		else if (secim == 1 && pcScm == 2)
		{

			cout << "Kagit,tasi sarar! (PC KAZANDI!)";

			kyp += 1;
			
		}

		//eger farkli rakam girilirse 
		else
		{

			cout << "lutfen 1,2,3 sayilarini giriniz!";

		}

		cout << "\nOyuna devam etmek istermisiniz ? (E/H)?";

		cin >> ch;

	}

	while (ch == 'E' || ch == 'e');	//dongu < sonu
	cout << "\nKAZANMA SAYISI:" << kzn;

	cout << "\nBERABERLIK SAYISI:" << brb;

	cout << "\nKAYBETME SAYISI:" << kyp;

}




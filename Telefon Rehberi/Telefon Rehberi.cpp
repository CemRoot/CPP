#include <iostream>
#include <cstring>

#include <cctype>
using namespace std;


struct rehber
{

	char ad[15];

	char soyad[20];

	char telefon[10];

} kayit;			/*yapi sonu */

FILE* rdosya;

//fonksiyon prototipleri
void kayitEkle();

void kayitListesi();

//ana program
int
main()
{

	char ch;

	do
	{

		cout << "[1]-Kayit ekle\n";

		cout << "[2]-Kayit Listele\n";

		cout << "[3]-Cikis\n";

		ch = getche();

		switch (ch)
		{

		case '1':
			kayitEkle();

			break;

		case '2':
			kayitListesi();

			break;

		case '3':
			break;


		}

		while (ch != '3');

		return 0;

	}

	//KayD1t ekle
	void kayitEkle();

	{

		int kayitno = 0;

		char cv = 'E';

		rdosya = fopen("Rehber.txt", "ab+");

		do
		{

			kayitno++;

			cout << "Ad giriniz\n";

			fflush(stdout);

			gets(kayit.ad);

			cout << "Soyadi giriniz\n";

			fflush(stdout);

			gets(kayit.soyad);

			cout << "Telefon giriniz\n";

			fflush(stdout);

			gets(kayit.telefon);

			fseek(rdosya, (kayitno - 1) * sizeof(kayit), SEEK_SET);

			fwrite(&kayit, sizeof(kayit), 1, rdosya);

			cout << "Devam edecekmisiniz[e/h]\n";

			cv = getche();

			while (toupper(cv) == 'E');

			fclose(rdosya);

		}

		//kayitlistele()
		void kayitListesi()
		{

			rdosya = fopen("Rehber.txt,", "rb+");

			cout << "--KayD1tlar YazD1lD1yor--\n";

			cout << "--==================--\n";

			while (!feof(rdosya))

			{

				fread(&kayit, sizeof(kayit), 1, rdosya);

				if (feof(rdosya))
					break;

				cout << kayit.ad << kayit.soyad << kayit.telefon;


			}

			cout << "--==================--\n";

			fclose(rdosya);

		}

	}

}

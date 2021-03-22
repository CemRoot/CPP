#include <iostream>
int main()
{
    char karakterler[10000];
    std::cout<<"Karakter giriniz:";
    std::cin>>karakterler;
    
    int karakter_sayilari[26];//inglizcede 26 harf vardır.
    for(int i=0; i<26; ++i)
    {      karakter_sayilari[i]=0;
    }
    for(int i=0;  karakterler[i] != '\0'; i++)
    {  
        char karakter = karakterler[i];
     
 int indis;
 
    //indis karakterin alfabede kacıncı sırada oldugunu gosterir.Karakterin a olduunu fark sayalım 'a'-a sonucunun 0 olacaktır.
    //0 ise a harfinin alfabedeki sırasını göstermektedir.
    if(karakter>='a')
    {
            indis= karakter - 'a';
     }
    else
    {   
               indis=karakter-'A';
    }
        
    karakter_sayilari[indis]++;
    }
    /*indis numarası ve 'A' harfinin toplar isek indesteki sayının hangi harfin sayısı oldugunu buluruz. Örn: max_char=i+'A'*/
    int max_sayi=-1,min_sayisi=10001;
    char max_char,min_char;
    for (int i= 0; i<26; ++i)
    {
        if(karakter_sayilari[i]==0)
        continue;
        if(karakter_sayilari[i]>max_sayi){
                max_sayi=karakter_sayilari[i];
                max_char=i+'A';
        }
        if(karakter_sayilari[i]<min_sayisi)
        {
                min_sayisi=karakter_sayilari[i];
                min_char=i+'A';
        }
    }
    std::cout<<"En fazla:"<<max_char<<" "<<max_sayi<<std::endl;
    std::cout<<"En az:"<<min_char<<" "<<min_char<<std::endl;
    
    return 0;
}
        

#include <iostream>

void buyukten_kucuk(char *cp)
{
        *cp+=32;//ASCII KODUNUN FARKI 
                //The ASCII codes for a-z are 97-122.
                //The ASCII codes for A-Z are 65-90.
        
}
void kucukten_buyuk(char *cp)
{
        *cp-=32;
        
}

void donustur()
{
        char c;
         while(true){   
                std::cout<<"harf giriniz:";
                std::cin>>c;
                if(c=='0')
                        return;
                if(c >='A' && c<= 'Z' )
                {
                        buyukten_kucuk(&c);
                }
                else
                {
                        kucukten_buyuk(&c);
                }
        std::cout<<"Sonuc:"<<c<<std::endl;
        
         }
}

int main(){
        donustur();
        return 0;


}

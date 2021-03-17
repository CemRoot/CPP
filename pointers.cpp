#include <iostream>

void hesapla(int r ,float *cevre, float *alan)
 } 
               *cevre = 2 * 3.14 * r;
               *alan = 3.14 * r * r;
}

int 
main()
{
    int yaricap;
    float cevre,alan;
   std::cout<<"Yaricap alani giriniz:";
    std::cin>>yaricap;
   
  hesapla(yaricap &cevre,&alan);
  std::cout<<"Dairenin cevresi:"<<cevre<<std::endl;
  std::cout<<"Dairenin alani:"<<alan<<std::endl;
  
  return 0 ;
}
     
              

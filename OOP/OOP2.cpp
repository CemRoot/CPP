#include <iostream>
using namespace std;

 
class people
{				//this is a simple CLASS
public:
int h;
  
int lb;
  
int age;
  
int food () 
  {
    
lb++;
  
} 
int f (int x) 
  {
    
return x + 10;
  
}

};


int 
main ()
{
  
 
 
people ali;		//obj
  ali.h = 180;
  
ali.lb = 200;
  
ali.age = 21;
  
cout << "Hieght:" << ali.h << " Lb:" << ali.lb << " age:" << ali.
    age << endl;
  
ali.food ();
  
cout << "Hieght:" << ali.h << " Lb:" << ali.lb << " age:" << ali.
    age << endl;
  
people veli;
  
veli.h = 170;
  
veli.lb = 243;
  
veli.age = 25;
  
cout << veli.h << "Hieght " << veli.lb << "Lb " << veli.age << " age" << endl;

}

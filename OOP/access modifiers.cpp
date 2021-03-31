#include <iostream>
using namespace std;

//access modifiers
 
 
 
 
class food 
{
public:

int kalori;
 
int price;

int gram;
  
 
int warmup (int t)
  {
    
if (t < 300)
      
kalori += t;
    
    else
   
kalori = 0;
}
};
 
class people 
{				//this is a simple CLASS
public:
int h;

float lb;

int age;

int food (food y) 
  {
lb += y.kalori / (float) 7000;
 
} 
int f (int x) 
  {
    return x + 10;
}

void mysalary(){
  cout<<"My Salary:"<<salary<<endl;
}

private:

 int salary = 500;
 
 
 
};
 
int main () 
{

food sandvic;

sandvic.kalori = 233;

sandvic.price = 25;

sandvic.gram = 120;
  

cout << "--ALI--" << endl;
  
people ali;		//obj
  ali.h = 180;
  
ali.lb = 200;
  
ali.age = 21;
  
cout << "Hieght:" << ali.h << " Lb:" << ali.lb << " age:" << ali. 
    age << endl;
  
 
ali.food (sandvic);
  
cout << "Hieght:" << ali.h << " Lb:" << ali.lb << " age:" << ali. 
    age << endl;
  
cout << "--VELI--" << endl;
  
people veli;
  
veli.h = 170;
  
veli.lb = 243;
 
veli.age = 25;
  
sandvic.warmup(200);
veli.food (sandvic); 
 
 
cout << veli.h << "yas " << veli.lb << "Lb " << veli.age << " age" << endl;

veli.mysalary();

 
 
 
 
} 

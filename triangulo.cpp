
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    
    float ladoa,ladob,ladoc,semiperimetro,area;
    
    
    
    cout<<"Digite o lado A do triangulo";
    cin>>ladoa;
     cout<<"Digite o lado B do triangulo";
     cin>>ladob;
           cout<<"Digite o lado C do triangulo";
           cin>>ladoc;
          
          semiperimetro=(ladoa+ladob+ladoc)/2;
          area= sqrt(semiperimetro*(semiperimetro-ladoa)*(semiperimetro-ladob)*(semiperimetro-ladoc));
          cout<<"A Area do triangulo : "<<area;
    return 0;
}

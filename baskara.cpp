

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    
    float a,b,c,delta,x1,x2;
    cout<<"Digite valor de A";
    cin>>a;
      cout<<"Digite valor de B";
      cin>>b;
          cout<<"Digite valor de C";
          cin>>c;
       delta=(b*b)-4*a*c;
       
     if(delta>0){
         x1=((b*-1)+sqrt(delta))/(2*a);
         cout<<"Valor de X1: "<<x1<<"\n";
         
         x2=((b*-1)-sqrt(delta))/(2*a);
         cout<<"Valor de X2: "<<x2<<"\n";
     }
   if(delta==0){
       x1=(b*-1)/(2*a);
       cout<<"Valor de X1: "<<x1;
   }
      else{
          cout<<"Sem raiz";
      }
    return 0;
}

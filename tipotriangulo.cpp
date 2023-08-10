#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    
    int a,b,c;
    cout<<"Digite o primeiro angulo do triangulo ";
    cin>>a;
           cout<<"Digite o segundo angulo do triangulo ";
           cin>>b;
                cout<<"Digite o terceiro angulo do triangulo ";
                cin>>c;
                
                if(a==b&&b==c&&c==60){
                    cout<<"Triangulo equilatero";
                }
               if(a==b&&c!=a ||a==c &&b!=a ||b==c&& c!=a ){
                    cout<<"Triangulo  isósceles";
                }
                 if  (a!=b && b!=c && c!=a){
                     cout<<"Triangulo escaleno";
                     
                 }
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    
 float a,b,c,d,menor,maior,media;


    cout<<"Digite o primeiro numero ";
    cin>>a;    
    maior=a;
    menor=a;
           cout<<"Digite o segundo numero ";
           cin>>b;
                cout<<"Digite o terceiro numero ";
                cin>>c;
                      cout<<"Digite o quarto numero ";
                      cin>>d;
                media=(a+b+c+d)/4;
               if(b>=maior){
                   maior=b;
               }
                if(c>=maior){
                   maior=c;
               }
                if(d>=maior){
                   maior=d;
               }
               if(b<=menor){
                   menor=b;
               }
                if(c<=menor){
                   menor=c;
               }
                if(d<=menor){
                   menor=d;
               }
                cout<<"Maior número digitado é "<<maior<<"\n";
                  cout<<"Menor número digitado é "<<menor<<"\n";
                  cout<<"Média dos números digitados é "<<media;
              
    return 0;
}

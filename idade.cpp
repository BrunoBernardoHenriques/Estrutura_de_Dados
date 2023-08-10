#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    
    int idade;
    cout<<"Digite a idade de uma pessoa";
    cin>>idade;
     if (idade<12){
         cout<<"Idade de criança";
     }
      if (idade>=12&&idade<=17){
         cout<<"Idade de adolecente";
     }
       if (idade>=18&&idade<=49){
         cout<<"Idade de adulto";
     }
      if (idade>=50){
         cout<<"Idade de idoso";
     }
   
       
    return 0;
}

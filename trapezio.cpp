#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    
    float basemaior,basemenor,lado,altura,area;
    cout<<"Digite a base maior do trapazio";
    cin>>basemaior;
       cout<<"Digite a base menor do trapazio";
       cin>>basemenor;
            cout<<"Digite a altura do trapazio";
            cin>>altura;
              
          
         area = ((basemaior+basemenor)*altura)/2;
         cout<<area;
    return 0;
}

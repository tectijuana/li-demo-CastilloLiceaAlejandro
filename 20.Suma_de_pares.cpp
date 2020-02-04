#include <iostream>

using namespace std;

int main()
{ 
    int suma=0;
    for(int i=2;i<=2000;i++)
    {
        if(i%2==0)
        {
            cout<<suma<<" + "<<i<<" = "<<suma+i<<endl;
            suma=suma+i;
        }
        if(i==2000)
        {
        cout<<"El resultado final es: "<<suma<<endl;    
        }
    }
    return 0;
}

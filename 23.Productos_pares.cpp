#include <iostream>

using namespace std;

int main()
{
    int N;
    int prod=1;
    while(true){
        cout<<"Ingrese un numero: ";
        cin>>N;
        if(N%2==0){
            cout<<"Producto: "<<N<<" * "<<prod<<" = "<<N*prod<<endl;
            prod=prod*N;
        }
    }
    return 0;
}

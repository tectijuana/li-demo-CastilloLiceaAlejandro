#include <iostream>

using namespace std;
int main()
{ 
    int ran1=rand()%100;
    int ran2=-100+rand()%1;
    
    int sum=ran1+ran2;
    cout<<ran1<<" + "<<ran2<<" = "<<sum<<endl;
    if(sum==0){
        cout<<"la suma da como resultado el numero 0";
    }
    else if(sum>0){
        cout<<"la suma da como resultado un numero superior a 0: "<<sum<<endl;
    }
    else{
        cout<<"la suma da como resultado un numero inferior a 0: "<<sum<<endl;
    }
    return 0;
}

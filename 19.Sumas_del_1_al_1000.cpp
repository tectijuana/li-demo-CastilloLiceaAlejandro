#include <iostream>
using namespace std;

int main() 
{
    int suma=0;
	for(int i=1;i<=1000;i++)
	{
	    suma=suma+i;
	    
	    cout<< suma <<endl;
	    
	    if(i==1000)
	    {
	        cout<< "El resulado final es: " << suma <<endl;
	    }
	}
	return 0;
}

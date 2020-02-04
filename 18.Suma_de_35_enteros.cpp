#include <iostream>

using namespace std;

int main()
{
    for (int i=0;i<35;i++) 
    {
        int r1 = rand() % 100;
        int r2 = rand() % 100;
        int sum = r1+r2;
        cout << r1 << "+" << r2 << "=" << sum << endl;
    }
    return 0;
}

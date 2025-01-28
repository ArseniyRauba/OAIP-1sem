#include <iostream>
using namespace std;
int main()
{
    int a = 1000;
    while (a < 10000)
    {
        if (a / 1000 != a / 100 % 10 && a / 100 % 10 != a / 10 % 10 && a / 10 % 10 != a % 10 && a / 1000 != a / 10 % 10 && a / 1000 != a % 10 && a / 100 % 10 != a % 10)
        {
            cout << "a= " << a << endl;
        }
        a += 1;
    }
}
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    double c, f= -125e-6, t=1, d, y=1.7;
    while (t<2.1)
    {
        cout << "t= " << t << endl;
        c = 2 * sin(f / 2) + log(t);
        cout << "c= " << c << endl;
        if (c>=3)
        {
            d = y * exp(-2 * t) + f;
        }
        else
            {
                d = y - pow(y, 3);
            }
        cout << "d= " << d << endl ;
        t += 0.1;
    }
}
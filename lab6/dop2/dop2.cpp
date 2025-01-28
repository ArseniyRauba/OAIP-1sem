#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    double years, procent, sum = 0, s;
    cout << "Введите количество лет: " << endl;
    cin >> years;
    cout << "Введите процент: " << endl;
    cin >> procent;
    procent = procent / 100;
    for (int i = 1; i <= years; i++)
    {
        cout << "Введите " << i << " число: " << endl;
        cin >> s;
        for (int j = 1; j <= years - i; j++){
            s = s - s * procent;
        }
        sum = sum + s;
    }
    cout << "Стоимость накопленного оборудования: " << sum << endl;
}
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int i, sz, j, A[100],B[100], count = 0;
    cout << "Введите размер массива: ";
    cin >> sz;

    cout << "Массив A: ";
    srand(time(NULL));

    for (i = 0; i < sz; i++)
    {
        *(A + i) = rand() % 20;
        cout << *(A + i) << " ";
    }
    cout << endl;

    cout << "Массив B: ";


    for (i = 0; i < sz; i++)
    {
        *(B + i) = rand() % 20;
        cout << *(B + i) << " ";
    }
    cout << endl;

    for (i = 0; i < sz; i++)
    {
        for (j = 0; j < sz; j++)
        {
            if (*(B + i) == *(A + j))
            {
                count += 1;
            }
        }
    }
    cout << count;
}
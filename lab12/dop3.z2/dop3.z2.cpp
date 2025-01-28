#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");
    int A[10], B[10], i, j, max = A[0];

    cout << "Массив A: ";
    for (i = 0; i < 10; i++)
    {
        *(A + i) = rand() % 25;
        cout << *(A + i) << " ";
    }
    cout << endl;

    cout << "Массив B: ";
    for (i = 0; i < 10; i++)
    {
        *(B + i) = rand() % 25;
        cout << *(B + i) << " ";
    }
    cout << endl;


    for (i = 0; i < 10; i++)
    {
        if (A[i] != B[i])
        {
            if (A[i] > max)
                max = A[i];
        }
    }
    cout << "Наибольшее число из первого массива, отсутствующее во втором: " << max;

    return 0;
}
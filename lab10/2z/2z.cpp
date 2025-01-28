//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	const int N = 100;
//	int i, sz, A[N], B[N], max;
//	cout << "Размер массивов: ";
//	cin >> sz;
//	cout << "1 Массив равен: ";
//	srand((unsigned)time(NULL));
//	for (i = 0; i < sz; i++)
//	{
//		A[i] = rand() % 100;
//		cout << A[i] << " ";
//	}
//	cout << endl;
//	cout << "2 Массив равен: ";
//	for (i = 0; i < sz; i++)
//	{
//		B[i] = rand() % 100;
//		cout << B[i] << " ";
//	}
//	cout << endl;
//	max = A[i];
//	cout << "Наибольшее число: ";
//	for (i = 0; i < sz; i++)
//	{
//		if (A[i]!=B[i] && A[i + 1] > max)
//			{
//				max = A[i+1];
//			}
//		cout << max << " ";
//	}
//}
#include <iostream>
using namespace std;

int main() {
    const int N = 100;
    int A[N], B[N], sz, i;
    int max = -1;

    cout << "Размер массивов: ";
    	cin >> sz;
    	cout << "1 Массив равен: ";
    	srand((unsigned)time(NULL));
    	for (i = 0; i < sz; i++)
    	{
    		A[i] = rand() % 100;
    		cout << A[i] << " ";
    	}
    	cout << endl;
    	cout << "2 Массив равен: ";
    	for (i = 0; i < sz; i++)
    	{
    		B[i] = rand() % 100;
    		cout << B[i] << " ";
    	}
       
    for (int i = 0; i < sz; i++) {
        bool isInArr2 = false;
        for (int j = 0; j < sz; j++) {
            if (A[i] == B[j]) {
                isInArr2 = true;
                break;
            }
        }
        if (!isInArr2 && A[i] > max) {
            max = A[i];
        }
    }

    if (max == -1) {
        cout << "There is no such element in the first array that is not in the second array\n";
    }
    else {
        cout << "The largest element in the first array that is not in the second array is " << max << "\n";
    }

    return 0;
}

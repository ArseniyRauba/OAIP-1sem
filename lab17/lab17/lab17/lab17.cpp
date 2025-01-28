#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Функция для вычисления произведения элементов массива, меньших 50
int calculateProductBelow50(int* array, int size);

// Функция для вычисления произведения матрицы на вектор
int calculateMatrixProduct(int** matrix, int* vector, int n, int m);

int main()
{
    setlocale(LC_ALL, "ru");

    srand(time(0)); // Инициализация генератора случайных чисел

    cout << "Задание 1: " << endl;

    const int size = 15; // Задаем размер массива

    int* A = new int[size];

    // Заполняем массив случайными числами в интервале от 1 до 200
    for (int i = 0; i < size; i++)
    {
        A[i] = rand() % 200 + 1;
    }

    cout << "Сгенерированный массив: ";
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    int result1 = calculateProductBelow50(A, size);
    cout << "Произведение элементов меньше 50: " << result1 << endl;

    delete[] A;

    cout << "Задание 2: " << endl;

    int n, m;

    cout << "Введите количество строк матрицы (n): ";
    cin >> n;

    cout << "Введите количество столбцов матрицы (m): ";
    cin >> m;

    int** matrixA = new int* [n];
    for (int i = 0; i < n; i++)
    {
        matrixA[i] = new int[m];
    }

    int* vectorB = new int[m];

    // Заполняем матрицу случайными числами в интервале от -200 до 200
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Введите элемент матрицы A[" << i << "][" << j << "]: ";
            cin >> matrixA[i][j];
        }
    }

    // Заполняем вектор случайными числами в интервале от -200 до 200
    for (int i = 0; i < m; i++)
    {
        cout << "Введите элемент вектора B[" << i << "]: ";
        cin >> vectorB[i];
    }

    cout << "Матрица A:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrixA[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Вектор B:" << endl;
    for (int i = 0; i < m; i++)
    {
        cout << vectorB[i] << endl;
    }

    int result2 = calculateMatrixProduct(matrixA, vectorB, n, m);
    cout << "Произведение матрицы A и вектора B:" << result2 << endl;

    for (int i = 0; i < n; i++)
    {
        delete[] matrixA[i];
    }
    delete[] matrixA;

    delete[] vectorB;

    return 0;
}

// Функция для вычисления произведения элементов массива, меньших 50
int calculateProductBelow50(int* array, int size)
{
    int product = 1;

    for (int i = 0; i < size; i++)
    {
        if (array[i] < 50)
        {
            product *= array[i];
        }
    }

    return product;
}

// Функция для вычисления произведения матрицы на вектор
int calculateMatrixProduct(int** matrix, int* vector, int n, int m)
{
    int product = 0;

    // Проверка, все ли числа в матрице отрицательны
    bool allNegative = true;
    for (int i = 0; i < n && allNegative; i++)
    {
        for (int j = 0; j < m && allNegative; j++)
        {
            if (matrix[i][j] >= 0)
            {
                allNegative = false;
                printf("Есть положительные элементы\n");
            }
        }
    }

    // Если все числа отрицательны, вычисляем произведение
    if (allNegative)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                product += matrix[i][j] * vector[j];
            }
        }
    }

    return product;
}

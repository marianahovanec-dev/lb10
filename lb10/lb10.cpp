#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>
using namespace std;

// Функція введення елементів масиву
void inputArray(vector<int>& arr, int n, string name) {
    cout << "Введіть елементи масиву " << name << " (" << n << " чисел): ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
}

// Функція обчислення суми квадратів додатних чисел
int sumPositiveSquares(const vector<int>& arr) {
    int sum = 0;
    for (int x : arr) {
        if (x > 0)
            sum += x * x;
    }
    return sum;
}

// Функція сортування масиву за зростанням
void sortArray(vector<int>& arr) {
    sort(arr.begin(), arr.end());
}

// Функція виведення масиву
void printArray(const vector<int>& arr, string name) {
    cout << "Масив " << name << ": ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;
}

// Головна функція програми
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n, m;
    cout << "Введіть кількість елементів першого масиву: ";
    cin >> n;
    cout << "Введіть кількість елементів другого масиву: ";
    cin >> m;

    vector<int> A, B;

    // Введення масивів
    inputArray(A, n, "A");
    inputArray(B, m, "B");

    cout << "\nПочаткові масиви:\n";
    printArray(A, "A");
    printArray(B, "B");

    // Обчислення сум квадратів додатних чисел
    int sumA = sumPositiveSquares(A);
    int sumB = sumPositiveSquares(B);

    cout << "\nСума квадратів додатних чисел у масиві A = " << sumA << endl;
    cout << "Сума квадратів додатних чисел у масиві B = " << sumB << endl;

    // Сортування
    sortArray(A);
    sortArray(B);

    cout << "\nВідсортовані масиви:\n";
    printArray(A, "A");
    printArray(B, "B");

    return 0;
}

#include <iostream>
#include <Windows.h>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float Z, dob, y;
    cout << "Введіть y:\ny = ";
    cin >> y;
    dob = 1;
//функція if
    if (pow(y,2)+3==0) {
        cout << "Помилка";
    }
    for (int i = 1; i <= 5; i++) {
        dob *= i;
    }
//розрахунок
    Z = (dob + 2 * cos(y)) / (pow(y, 2) + 3); 
    cout << setw(6) << "Z = " << setprecision(0) << Z;
}
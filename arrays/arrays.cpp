﻿// arrays.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void sumElements() {
    const int s = 6;
    int nums[s];
    int t = 0;
    cout << "Введите числа для массива: " << endl;


    for(int i =0; i<s; i++)
    { 
        cin >> nums[i];
    }
    

    for (int i = 0; i < s; i++) {
        cout << nums[i] << "  ";
    }
    cout << endl;

    for (int i = 0; i < s; i++) {
        t += nums[i];
        nums[i] = t;
    }

    for (int i = 0; i < s; i++) {
        cout << nums[i] << "  ";
    }
    cout << endl;
}

void monotonicArray() {

    const int s = 5;
    int nums[s];
    bool res;
    cout << "Введите числа для массива: " << endl;
    for (int i = 0; i < s; i++)
    {
        cin >> nums[i];
    }

    for (int i = 0; i < s-1; i++) {
        
        if ((nums[i] - nums[i+1] == -1) || (nums[i] == nums[i+1])) {
            res = true;         
        }
        else {
            res = false;
        }
    }
    cout << endl;

    for (int i = 0; i < s; i++) {
        cout << nums[i] << "  ";
    }

    if (res == 1) {
        cout << "true" << endl;
    }
    else if (res == 0) {
        cout << "false" << endl;
    }

}

int main()
{
    setlocale(LC_ALL, "ru");
    monotonicArray();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

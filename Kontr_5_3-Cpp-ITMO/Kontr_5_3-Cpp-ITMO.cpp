// Kontr_5_3-Cpp-ITMO.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
# include <windows.h>
#include <string>
#include <cstring>

using namespace std;


//  Поиск значение KEY при вызове
int* search(int nums[], int size, int key) {
    int i = 0;
    int size0 = size;
    int key7 = key;
    int* nom = new int[size];
    int nn1 = 0;
    int nn2 = 0;
    string str;
    for (i = 0; i < size0; ++i) {
        if (nums[i + 1] == key7) {
            if (i >= 0) {
                swap(nums[i + 1], nums[i]);
            }
        }
        nom[i] = nums[i];
        str = str + to_string(nom[i]);
        //cout << ":";
       // cout << nom[i];

    }

    return nom;
}


int main() {
    setlocale(LC_CTYPE, "rus");

    int nums[] = { 5, 1, 7, 3, 7, 9, 1, 0, 1 };
    int size = sizeof(nums) / sizeof(nums[0]);
    // cout << L": размер передаваемого массива :" << size << endl;
    wcout << L"\n-KEY = 1(для поиска в массиве):" << endl;
    wcout << L"Массив=";
    for (int n0 = 0; n0 < size; n0++) {
        wcout << nums[n0];
    }

    int* nom1 = search(nums, size, 1);
    wcout << L"\n-первый вызов функции и поиск KEY :";
    for (int n = 0; n < size; n++) {
        wcout << "," << nom1[n];
    }

    int* nom2 = search(nom1, size, 1);
    wcout << L"\n-второй вызов функции и поиск KEY :";
    for (int n2 = 0; n2 < size; n2++) {
        wcout << "," << nom1[n2];
    }

    int* nom3 = search(nom2, size, 1);
    wcout << L"\n-третий вызов функции и поиск KEY :";
    for (int n3 = 0; n3 < size; n3++) {
        wcout << "," << nom2[n3];
    }


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

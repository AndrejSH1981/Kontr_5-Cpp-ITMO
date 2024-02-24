// Kontr_5_4-Cpp-ITMO.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
# include <windows.h>
#include <string>
#include <cstring>

using namespace std;

string metod(string argv) {

    int ii = 0;
    int i0 = 0;
    int i1 = 0;
    int i2 = 0;
    int i3 = 0;
    string name = argv;

    string argv0[25];
    string name1;
    string param;
    string a_str;
    string b_str;

    int size_argv = name.length();
    int size_argv_name1 = 0;

    for (int i = 0; i < size_argv; i++) {
        argv0[i] = name[i];

        if (argv0[i] == "'") {
            i0 = i + 1;
            for (int n = 0; n < i; n++) {
                name1 = name1 + argv0[n];
            }
            ii = ii + 1;
        }
        if (argv0[i] == ";") {
            i1 = i + 1;
            for (int n = i0; n < i; n++) {
                param = param + argv0[n];
            }
            ii = ii + 1;
        }
        if (argv0[i] == "/") {
            i2 = i + 1;
            for (int n = i1; n < i; n++) {
                a_str = a_str + argv0[n];
            }
            ii = ii + 1;
        }
        if (argv0[i] == "*") {
            i3 = i + 1;
            for (int n = i2; n < i; n++) {
                b_str = b_str + argv0[n];
            }
            ii = ii + 1;
        }
    }
    size_argv_name1 = ii;
    int a = stoi(a_str);
    int b = stoi(b_str);
    int c = 0;

    if (name1 != "metod") {
        ii = ii - 1;
    }
    if (ii < 4) {
        wcout << L"\nНе корректный набор параметров. Ожидалось 4 корректных параметра, получено функцией:  " << (ii) << endl;
        c = 0;
    }
    else if (param != "-a" && param != "-m") {
        wcout << L" \nНе корректный параметр выбора действия: ";
        cout << param << "\"" << endl;
        c = 0;
    }
    else {
        try {
            if (param == "-a") {
                c = a + b;
            }
            else if (param == "-m") {
                c = a * b;
            }
        }
        catch (const invalid_argument&) {
            wcout << L"\nНе корректный ввод" << endl;
        }
    }
    string c_string = to_string(c);
    return c_string;
}

int main() {

    setlocale(LC_CTYPE, "rus");
    int ii = 0;
    string str0;
    string str1;
    string str2;
    string str3;
    string str99;


    string argv[255];
    wcout << L"-первый параметр ввода('metod'): ";
    cin >> str0;
    for (int i = 0; i < str0.length(); i++) {
        argv[i] = str0[i];
        ii = i;
    }
    str0 = str0 + "'";
    ii = ii + 1;
    wcout << L"-второй параметр ввода('-m' для умножения или '-a' для сложения): ";
    cin >> str1;
    for (int i = 0; i < str1.length(); i++) {
        argv[i] = str1[i];
        ii = ii + 1;
    }
    str1 = str1 + ";";
    ii = ii + 1;
    wcout << L"-третий параметр ввода(одно число): ";
    cin >> str2;
    for (int i = 0; i < str2.length(); i++) {
        argv[ii] = str2[i];
        ii = ii + 1;
    }
    str2 = str2 + "/";
    ii = ii + 1;
    wcout << L"-четвёртый параметр ввода(второе число): ";
    cin >> str3;
    for (int i = 0; i < str3.length(); i++) {
        argv[ii] = str3[i];
        ii = ii + 1;
    }
    str3 = str3 + "*";
    ii = ii + 1;
    str99 = str0 + str1 + str2 + str3;
    string c = metod(str99);
    cout << "\n-результат действия = " << c << endl;
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

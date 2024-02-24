// Kontr_5_1-Cpp-ITMO.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
# include <windows.h>
#include <string>

using namespace std;


//  Сортировка массива по возрастанию
void SortArray(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        int min = i;

        for (int j = i + 1; j < size; j++) {
            min = (nums[j] < nums[min]) ? j : min;
        }

        swap(nums[i], nums[min]);
    }
}

//  Сумма элементов массива
int FindSum(int nums[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += nums[i];
    }
    return sum;
}

//  Сумма отрицательных элементов массива
int NegativeSum(int nums[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] < 0) {
            sum += nums[i];
        }
    }
    return sum;
}


//  Сумма положительных элементов массива
int PositiveSum(int nums[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] > 0) {
            sum += nums[i];
        }
    }
    return sum;
}

// Сумма элементов массива
int IndexSumOdd(int nums[], int size) {
    int sum = 0;
    for (int i = 1; i < size; i += 2) {
        sum += nums[i];
    }
    return sum;
}

//  Сумма элементов массива
int IndexSumEvent(int nums[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i += 2) {
        sum += nums[i];
    }


    return sum;
}


//  Позиции минимума и максимума в массиве

string MinMaxPosition(int nums[], int size) {
    int min_pos = 0;
    int max_pos = 0;
    string min_pos_str;
    string max_pos_str;
    string min_pos_str_in;
    string max_pos_str_in;
    string min_max_pos;
    for (int i = 0; i < size; ++i) {
        if (nums[i] < nums[min_pos]) {
            min_pos = i;
            min_pos_str_in = to_string(min_pos);
            min_pos_str = to_string(nums[min_pos]);
        }
        if (nums[i] > nums[max_pos]) {
            max_pos = i;
            max_pos_str_in = to_string(max_pos);
            max_pos_str = to_string(nums[max_pos]);
        }
    }
    min_max_pos = "индекс минимального элемента массива (" + min_pos_str + ")= " + min_pos_str_in + " / " + "индекс максимального элемента массива (" + max_pos_str + ")= " + max_pos_str_in;

    return min_max_pos;
}

int main() {

    setlocale(LC_CTYPE, "rus");

    const int size = 7;
    int mas[size];
    for (int i = 0; i < size; i++) {
        cout << "mas[" << i << "]=";
        cin >> mas[i];
    }

    int sum = FindSum(mas, size);
    cout << "Sum: " << sum << endl;

    wcout << L" - сумма отрицательных элементов массива = : " << NegativeSum(mas, size) << endl;
    wcout << L" - сумма положительных элементов массива = : " << PositiveSum(mas, size) << endl;
    wcout << L" - сумма элементов, находящихся на четных позициях массива = : " << IndexSumOdd(mas, size) << endl;
    wcout << L" - сумма элементов, находящихся на нечетных позициях массива : " << IndexSumEvent(mas, size) << endl;//


    string MinMaxIndex = MinMaxPosition(mas, size);

    cout << L" -: " << MinMaxIndex << endl;

    SortArray(mas, size);
    cout << "Сортировка массива по возрастанию: ";
    for (int i = 0; i < size; ++i) {
        if (i > 0) {
            cout << ' ';
        }
        cout << mas[i];
    }
    cout << std::endl;
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


#include <iostream>

using namespace std;

int work1()
{
    int i_1 = 45;
    int i_2 = 0;
    int i_3 = -234;
    int i_4 = 6342;
    int i_5 = 234;

    cout << "i_1   = " << i_1 << " | тип: int, размер: 4 б." << endl;
    cout << "i_2   = " << i_2 << " | тип: int, размер: 4 б." << endl;
    cout << "i_3   = " << i_3 << " | тип: int, размер: 4 б." << endl;
    cout << "i_4   = " << i_4 << " | тип: int, размер: 4 б." << endl;
    cout << "i_5   = " << i_5 << " | тип: int, размер: 4 б." << endl;

    short s_1 = 456;
    short s_2 = -9;
    short s_3 = -23;
    short s_4 = 76;
    short s_5 = 21;

    cout << "s_1   = " << s_1 << " | тип: short, размер: 2 б." << endl;
    cout << "s_2   = " << s_2 << " | тип: short, размер: 2 б." << endl;
    cout << "s_3   = " << s_3 << " | тип: short, размер: 2 б." << endl;
    cout << "s_4   = " << s_4 << " | тип: short, размер: 2 б." << endl;
    cout << "s_5   = " << s_5 << " | тип: short, размер: 2 б." << endl;

    float f_1 = 6.343;
    float f_2 = 3.14;
    float f_3 = 2.13;
    float f_4 = -99;
    float f_5 = 09.322;

    cout << "f_1   = " << f_1 << " | тип: float, размер: 4 б." << endl;
    cout << "f_2   = " << f_2 << " | тип: float, размер: 4 б." << endl;
    cout << "f_3   = " << f_3 << " | тип: float, размер: 4 б." << endl;
    cout << "f_4   = " << f_4 << " | тип: float, размер: 4 б." << endl;
    cout << "f_5   = " << f_5 << " | тип: float, размер: 4 б." << endl;

    double d_1 = 34.3333;
    double d_2 = 9000.1;
    double d_3 = 4555;
    double d_4 = -98633;
    double d_5 = 97235.234443;

    cout << "d_1   = " << d_1 << " | тип: double, размер: 8 б." << endl;
    cout << "d_2   = " << d_2 << " | тип: double, размер: 8 б." << endl;
    cout << "d_3   = " << d_3 << " | тип: double, размер: 8 б." << endl;
    cout << "d_4   = " << d_4 << " | тип: double, размер: 8 б." << endl;
    cout << "d_5   = " << d_5 << " | тип: double, размер: 8 б." << endl;

    char c_1 = 'a';
    char c_2 = 'F';
    char c_3 = '3';
    char c_4 = ':';
    char c_5 = ',';

    cout << "c_1   = '" << c_1 << "' | тип: char, размер: 1 б." << endl;
    cout << "c_2   = '" << c_2 << "' | тип: char, размер: 1 б." << endl;
    cout << "c_3   = '" << c_3 << "' | тип: char, размер: 1 б." << endl;
    cout << "c_4   = '" << c_4 << "' | тип: char, размер: 1 б." << endl;
    cout << "c_5   = '" << c_5 << "' | тип: char, размер: 1 б." << endl;

    bool b_1 = false;
    bool b_2 = true;
    bool b_3 = true;
    bool b_4 = false;
    bool b_5 = true;

    cout << "b_1   = " << b_1 << " | тип: bool, размер: 1 б." << endl;
    cout << "b_2   = " << b_2 << " | тип: bool, размер: 1 б." << endl;
    cout << "b_3   = " << b_3 << " | тип: bool, размер: 1 б." << endl;
    cout << "b_4   = " << b_4 << " | тип: bool, размер: 1 б." << endl;
    cout << "b_5   = " << b_5 << " | тип: bool, размер: 1 б." << endl;

    string str_1 = "Hello!";
    string str_2 = "World";
    string str_3 = "Exception";
    string str_4 = "Rust lang";
    string str_5 = "continue...";

    cout << "str_1 = \"" << str_1 << "\" | тип: string, размер: N б." << endl;
    cout << "str_2 = \"" << str_2 << "\" | тип: string, размер: N б." << endl;
    cout << "str_3 = \"" << str_3 << "\" | тип: string, размер: N б." << endl;
    cout << "str_4 = \"" << str_4 << "\" | тип: string, размер: N б." << endl;
    cout << "str_5 = \"" << str_5 << "\" | тип: string, размер: N б." << endl;

    return 0;
}

int work2() {
    cout
        << "[-] Программа \"Времена года\"" << endl
        << endl
        << "[1] Лето" << endl
        << "[2] Осень" << endl
        << "[3] Зима" << endl
        << "[4] Весна" << endl
        << endl
        << "[-] Введите значение: ";


    int select;
    cin >> select;

    switch (select) {
    case 1:
        cout << "[-] Лето, следует одеться легко." << endl;
        break;
    case 2:
        cout << "[-] Сейчас осень, следует одеться тепло и взять с собой зонт." << endl;
        break;
    case 3:
        cout << "[-] Сейчас зима, следует одеться очень тепло." << endl;
        break;
    case 4:
        cout << "[-] Сейчас весна, следует взять с собой зонт." << endl;
        break;
    default:
        cout << "[-] Недопустимое значение!" << endl;
        return 1;
    }

    return 0;
}

int work3() {
    cout << "[+] Введите число: ";

    int num;
    cin >> num;

    if (num < 0) {
        cout << "[+] Ошибка! Число меньше 0." << endl;
        return 1;
    }

    if (num > 100) {
        cout << "[+] Ошибка! Число больше 100." << endl;
        return 1;
    }

    if (num <= 10)
        cout << "[+] Число в диапазоне: 0 - 10" << endl;

    else for (int i = 20; i <= 110; i += 10) {
        if (num <= i) {
            cout
                << "[+] Число в диапазоне: " << i - 9 << " - " << i << endl;
            break;
        }
    }

    return 0;
}

int work4() {
    cout << "[+] Введите число: ";

    int base;
    cin >> base;

    for (int i = 1; i <= 9; i++) {
        int result;
        
        cout
            << "[+] Решит пример " << base << " x " << i << endl
            << "[+] Ответ: ";

        cin >> result;

        if (result == i * base) {
            cout << "[+] Пример решен правильно!" << endl;
        }
        else {
            cout << "[-] Ошибка, пример решен неверно!" << endl;
            return 1;
        }
    }

    cout << "[+] Примеры решены, поздравляем! " << endl;

    return 0;
}

int work5() {
    int a, b;

    cout << "[+] Введите A: ";
    cin >> a;
    cout << "[+] Введите B: ";
    cin >> b;

    cout
        << "[+] Доступны операции: + - * / %" << endl
        << "[+] Выберите оперрацию: ";

    char op;
    cin >> op;

    switch (op) {
    case '+':
        cout << "[+] Результат: " << a << " + " << b << " = " << a + b << endl;
        break;
    case '-':
        cout << "[+] Результат: " << a << " - " << b << " = " << a - b << endl;
        break;
    case '*':
        cout << "[+] Результат: " << a << " * " << b << " = " << a * b << endl;
        break;
    case '/':
        cout << "[+] Результат: " << a << " / " << b << " = " << a / b << endl;
        break;
    case '%':
        cout << "[+] Результат: " << a << " % " << b << " = " << a % b << endl;
        break;
    default:
        cout << "[-] Неизвестная операция" << endl;
        return 1;
    }
}

int main()
{
    setlocale(0, "");
    return work5();
}

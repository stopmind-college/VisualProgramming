
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

    float f_1 = 6.343f;
    float f_2 = 3.14f;
    float f_3 = 2.13f;
    float f_4 = -99.f;
    float f_5 = 09.322f;

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

    return 0;
}

int work6() {
    cout
        << "[+ ] Месяца года:" << endl
        << "[1 ] Январь"       << endl
        << "[2 ] Февраль"      << endl
        << "[3 ] Март"         << endl
        << "[4 ] Апрель"       << endl
        << "[5 ] Май"          << endl
        << "[6 ] Июнь"         << endl
        << "[7 ] Июль"         << endl
        << "[8 ] Август"       << endl
        << "[9 ] Сентябрь"     << endl
        << "[10] Октябрь"      << endl
        << "[11] Ноябырь"      << endl
        << "[12] Декабрь"      << endl
                               << endl
        << "[+] Выберите месяц: ";

    int month;
    cin >> month;

    switch (month) {
    case 1:
        cout << "[+] Выбран месяц \"Январь\"" << endl;
        break;
    case 2:
        cout << "[+] Выбран месяц \"Февраль\"" << endl;
        break;
    case 3:
        cout << "[+] Выбран месяц \"Март\"" << endl;
        break;
    case 4:
        cout << "[+] Выбран месяц \"Апрель\"" << endl;
        break;
    case 5:
        cout << "[+] Выбран месяц \"Май\"" << endl;
        break;
    case 6:
        cout << "[+] Выбран месяц \"Июнь\"" << endl;
        break;
    case 7:
        cout << "[+] Выбран месяц \"Июль\"" << endl;
        break;
    case 8:
        cout << "[+] Выбран месяц \"Август\"" << endl;
        break;
    case 9:
        cout << "[+] Выбран месяц \"Сентябрь\"" << endl;
        break;
    case 10:
        cout << "[+] Выбран месяц \"Октябрь\"" << endl;
        break;
    case 11:
        cout << "[+] Выбран месяц \"Ноябырь\"" << endl;
        break;
    case 12:
        cout << "[+] Выбран месяц \"Декабрь\"" << endl;
        break;
    default:
        cout << "[+] Неправильно введен номер месяца!" << endl;
        return 1;
    }

    return 0;
}

int work7() {
    cout
        << "[+ ] Месяца года:" << endl
        << "[1 ] Январь" << endl
        << "[2 ] Февраль" << endl
        << "[3 ] Март" << endl
        << "[4 ] Апрель" << endl
        << "[5 ] Май" << endl
        << "[6 ] Июнь" << endl
        << "[7 ] Июль" << endl
        << "[8 ] Август" << endl
        << "[9 ] Сентябрь" << endl
        << "[10] Октябрь" << endl
        << "[11] Ноябырь" << endl
        << "[12] Декабрь" << endl
        << endl
        << "[+] Выберите месяц: ";

    int month;
    cin >> month;

    switch (month) {
    case 1:
        cout << "[+] Выбран месяц \"Январь\"" << endl;
        break;
    case 2:
        cout << "[+] Выбран месяц \"Февраль\"" << endl;
        break;
    case 3:
        cout << "[+] Выбран месяц \"Март\"" << endl;
        break;
    case 4:
        cout << "[+] Выбран месяц \"Апрель\"" << endl;
        break;
    case 5:
        cout << "[+] Выбран месяц \"Май\"" << endl;
        break;
    case 6:
        cout << "[+] Выбран месяц \"Июнь\"" << endl;
        break;
    case 7:
        cout << "[+] Выбран месяц \"Июль\"" << endl;
        break;
    case 8:
        cout << "[+] Выбран месяц \"Август\"" << endl;
        break;
    case 9:
        cout << "[+] Выбран месяц \"Сентябрь\"" << endl;
        break;
    case 10:
        cout << "[+] Выбран месяц \"Октябрь\"" << endl;
        break;
    case 11:
        cout << "[+] Выбран месяц \"Ноябырь\"" << endl;
        break;
    case 12:
        cout << "[+] Выбран месяц \"Декабрь\"" << endl;
        break;
    default:
        cout << "[+] Неправильно введен номер месяца!" << endl;
        return 1;
    }

    cout << "[+] Выберите день месяца: ";
    int day;
    cin >> day;

    if (day < 1) {
        invalid_day:
        cout << "[+] Недопустимый день.";
        return 1;
    }

    switch (month) {
    case 2:
        if (day > 28) goto invalid_day;
    case 6:
    case 9:
    case 11:
    case 4:
        if (day > 30) goto invalid_day;
    default:
        if (day > 31) goto invalid_day;
    }

    switch (month) {
    case 1:
        cout << "[+] Календарь: " << day << " января." << endl;
        break;
    case 2:
        cout << "[+] Календарь: " << day << " февраля." << endl;
        break;
    case 3:
        cout << "[+] Календарь: " << day << " марта." << endl;
        break;
    case 4:
        cout << "[+] Календарь: " << day << " апреля." << endl;
        break;
    case 5:
        cout << "[+] Календарь: " << day << " мая." << endl;
        break;
    case 6:
        cout << "[+] Календарь: " << day << " июня." << endl;
        break;
    case 7:
        cout << "[+] Календарь: " << day << " июля." << endl;
        break;
    case 8:
        cout << "[+] Календарь: " << day << " августа." << endl;
        break;
    case 9:
        cout << "[+] Календарь: " << day << " сентября." << endl;
        break;
    case 10:
        cout << "[+] Календарь: " << day << " октября." << endl;
        break;
    case 11:
        cout << "[+] Календарь: " << day << " ноябыря." << endl;
        break;
    default:
        cout << "[+] Календарь: " << day << " декабря." << endl;
    }
}

int work8() {
    const int WORDS_COUNT = 15;

    string RU[WORDS_COUNT] = {
        "Дорога",
        "Человек",
        "День",
        "Сегодня",
        "Погода",

        "Год",
        "Время",
        "Информация",
        "Дом",
        "Неделя",

        "Стол",
        "Свет", 
        "Гора",
        "Цвет",
        "Коробка"
    };

    string EN[WORDS_COUNT] = {
        "Road",
        "Human",
        "Day",
        "Today",
        "Weather",
        
        "Year",
        "Time",
        "Infromation",
        "Home",
        "Week",

        "Table",
        "Light",
        "Mountain",
        "Color",
        "Box"
    };

    cout
        << "[+] Переводчик" << endl
        << endl
        << "[1] Русский" << endl
        << "[2] Английский" << endl
        << endl
        << "[3] Выйти" << endl
        << endl
        << "[+] Выберите вариант: ";

    int n;

    string* original;
    string* translated;

    cin >> n;
    switch (n) {
    case 1:
        cout << "[+] Выбран русский." << endl;

        original = RU;
        translated = EN;
        break;
    case 2:
        cout << "[+] Выбран английский." << endl;

        original = EN;
        translated = RU;
        break;
    case 3:
        cout << "[+] Выход." << endl;

        return 0;
    default:
        cout << "[-] Недопустимый ввод." << endl;
        return 1;
    }

    cout << endl;

    for (int i = 0; i < WORDS_COUNT; i++) {
        cout << "[" << i+1 << "] " << original[i] << endl;
    }

    cout
        << endl
        << "[+] Выберите номер слова: ";
    cin >> n;
    n--;

    if (n < 0 || n >= WORDS_COUNT) {
        cout << "[-] Недопустимый ввод." << endl;
        return 1;
    }

    cout << "[+] Перевод: " << original[n] << " -> " << translated[n] << endl;
    return 0;
}

int work9() {
    int n;
    while (true) {

        cout
            << "[+] Цикл \"WHILE\"" << endl
            << endl
            << "[+] Введите число: ";


        cin >> n;
        if (n == 0) {
            cout << "[+] Выход" << endl;
            return 0;
        }

        if (n < 0 || n > 15) {
            cout << "[-] Недопустимое значение!" << endl;
        }
        else {
            n += 1;
            for (int i = 1; i < n; i++)
                cout << "[+] Цикл отработал. Круг: " << i << "." << endl;
        }
    }
}

int work10() {
    start:
    cout
        << "[+] Игра \"Угадайка\"" << endl
        << endl
        << "[1] Начать игру" << endl
        << "[2] Выйти" << endl
        << endl
        << "[>] Выберите вариант: ";

    int n;
    cin >> n;

    switch (n) {
    case 1:
        break;
    case 2:
        cout << "[+] Выход" << endl;
        return 0;
    default:
        cout << "[-] Недопустимый ввод" << endl;
        goto start;
    }

    int nums[] = {
        rand() % 10 + 1,
        rand() % 10 + 1,
        rand() % 10 + 1
    };

    int guess_counter = 0;
    int try_counter = 5;

    while (true) {
        cout
            << endl
            << "[+] Угаданных чисел : [" << guess_counter << " / 3]" << endl
            << "[+] Попыток : [" << try_counter <<"]" << endl
            << endl
            << "[>] Угадать число: ";

        cin >> n;

        if (n < 1 || n > 10) {
            cout << "[-] Недопустимый ввод!" << endl;
            continue;
        }

        try_counter--;

        if (nums[guess_counter] == n) {
            cout << "[+] Вы угадали число!" << endl;
            guess_counter++;
        }
        else {
            cout << "[-] Вы не угадали число!" << endl;
        }

        cout << endl;

        if (guess_counter == 3) {
            cout << "[+] Вы победили!" << endl;
            break;
        }

        if (try_counter == 0) {
            cout << "[-] Вы проиграли!" << endl;
            break;
        }
    }

    return 0;
}

int work11_13_14_15_16_17_18_19_20_21() {
    cout 
        << "[+] Программа - Геометрические фигуры" << endl
        << "[1] Линия" << endl
        << "[2] Круг" << endl
        << "[3] Квадрат" << endl
        << "[4] Треугольник" << endl
        << "[5] Решетка" << endl
        << "[6] Крест" << endl
        << "[7] Плюс" << endl
        << "[8] Ромб" << endl
        << "[9] Змейка" << endl
        << "[10] Рекурсивный квадрат" << endl
        << "[+] Выберите фигуру : ";

    int figure;
    cin >> figure;

    cout << endl;

    switch (figure) {
    case 1:
        cout
            << "[+] Фигура: Линия" << endl
            << endl
            << "[1] Горизонтальная" << endl
            << "[2] Вертикальная" << endl;
        break;
    case 2:
        cout
            << "[+] Фигура: Круг" << endl
            << endl
            << "[1] С заливкой" << endl
            << "[2] Без заливки" << endl;
        break;
    case 3:
        cout
            << "[+] Фигура: Квадрат" << endl
            << endl
            << "[1] С заливкой" << endl
            << "[2] Без заливки" << endl;
        break;
    case 4:
        cout
            << "[+] Фигура: Треугольник" << endl
            << endl
            << "[1] С заливкой" << endl
            << "[2] Без заливки" << endl;
        break;
    case 5:
    case 6:
    case 7: 
    case 8:
    case 9:
    case 10: break;
    default:
        goto invalid_value;
    }


    int type;
    if (figure < 5) {
        cout
            << endl
            << "[+] Выберите тип: ";
        cin >> type;

        if (type < 1 || type > 2)
            goto invalid_value;
    }

    cout << "[+] Текстура: ";
    char tex;
    cin >> tex;

    cout << endl;

    switch (figure) {
    case 1: {
        cout << "[+] Ширина: ";
        int width;
        cin >> width;

        cout << "[+] Высота: ";
        int height;
        cin >> height;

        if (width <= 0 || height <= 0)
            goto invalid_value;

        if (type == 1) {
            for (int i = 0; i < width; i++)
                cout << tex;
            cout << endl;

        }
        else {
            for (int i = 0; i < height; i++)
                cout << tex << endl;
            cout << endl;
        }
        break;
    }
    case 2: {
        cout << "[+] Ширина: ";
        int width;
        cin >> width;

        cout << "[+] Высота: ";
        int height;
        cin >> height;

        if (width <= 0 || height <= 0)
            goto invalid_value;


        if (type == 1) {
            for (int y = 0; y <= height; y++) {
                for (int x = 0; x <= width; x++)
                {
                    float len = sqrt(pow((float)x / (float)width - 0.5f, 2) + pow((float)y / (float)height - 0.5f, 2));
                    if (len <= 0.5f)
                        cout << tex;
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }
        else {
            for (int y = 0; y <= height; y++) {
                for (int x = 0; x <= width; x++)
                {
                    float len = sqrt(pow((float)x / (float)width - 0.5f, 2) + pow((float)y / (float)height - 0.5f, 2));
                    if (len > 0.45f && len < 0.55f)
                        cout << tex;
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }
        break;
    }
    case 3: {
        cout << "[+] Ширина: ";
        int width;
        cin >> width;

        cout << "[+] Высота: ";
        int height;
        cin >> height;

        if (width <= 0 || height <= 0)
            goto invalid_value;


        if (type == 1) {
            for (int i = 0; i < height; i++) {
                for (int j = 0; j < width * 2; j++)
                    cout << tex;
                cout << endl;
            }
        }
        else {

            for (int i = 0; i < width; i++)
                cout << tex;

            cout << endl;
            for (int i = 0; i < height - 2; i++) {
                cout << tex;
                for (int j = 0; j < width - 2; j++)
                    cout << " ";
                cout << tex << endl;
            }


            for (int i = 0; i < width; i++)
                cout << tex;

            cout << endl;
        }
        break;
    }
    case 4: {
        cout << "[+] Размер: ";
        int size;
        cin >> size;

        char inner_tex = ' ';
        if (type == 1) {
            inner_tex = tex;
        }

        if (size <= 0)
            goto invalid_value;

        int left = size / 2;
        int inner = 0;
        if (size % 2 == 1)
        {
            for (int i = 0; i < left; i++)
                cout << " ";
            cout << tex << endl;
            left--;
            inner++;
        }

        while (left > 0) {
            for (int i = 0; i < left; i++)
                cout << " ";
            cout << tex;
            for (int i = 0; i < inner; i++)
                cout << inner_tex;
            cout << tex << endl;

            left--;
            inner += 2;
        }

        for (int i = 0; i < size; i++)
            cout << tex;
        cout << endl;


        break;
    }
    case 5: {
        cout << "[+] Ширина: ";
        int width;
        cin >> width;

        cout << "[+] Высота: ";
        int height;
        cin >> height;

        if (width <= 0 || height <= 0)
            goto invalid_value;

        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                if (x % 2 == 1 || y % 2 == 1)
                    cout << tex ;
                else
                    cout << " ";
            }
            cout << endl;
        }
        break;
    }
    case 6: {
        cout << "[+] Размер: ";
        int size;
        cin >> size;

        if (size <= 0)
            goto invalid_value;

        int i = size;
        int w = -1;
        while (true) {
            i -= 2;
            w++;

            if (i == -1) {
                for (int j = 0; j < w; j++)
                    cout << ' ';
                cout << tex << endl;
                break;
            }

            for (int j = 0; j < w; j++)
                cout << ' ';
            cout << tex;
            for (int j = 0; j < i; j++)
                cout << ' ';
            cout << tex << endl;

            if (i == 0) {
                for (int j = 0; j < w; j++)
                    cout << ' ';
                cout << tex << tex << endl;
                break;
            }
        }
        while (w != 0) {
            w--;
            i += 2;

            for (int j = 0; j < w; j++)
                cout << ' ';
            cout << tex;
            for (int j = 0; j < i; j++)
                cout << ' ';
            cout << tex << endl;
        }

        break;
    }   
    case 7: {
        cout << "[+] Ширина: ";
        int width;
        cin >> width;

        cout << "[+] Высота: ";
        int height;
        cin >> height;

        if (width <= 0 || height <= 0)
            goto invalid_value;

        int gap_w = (width - 1) / 2;
        int gap_h = (height - 1) / 2;

        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                if (x == gap_w || y == gap_h)
                    cout << tex;
                else
                    cout << " ";
            }

            cout << endl;
        }
        break;
    }
    case 8: {
        cout << "[+] Размер: ";
        int size;
        cin >> size;

        if (size <= 0)
            goto invalid_value;

        int left = size / 2;
        int inner = 0;
        if (size % 2 == 1)
        {
            for (int i = 0; i < left; i++)
                cout << " ";
            cout << tex << endl;
            left--;
            inner++;
        }

        while (left >= 0) {
            for (int i = 0; i < left; i++)
                cout << " ";
            cout << tex;
            for (int i = 0; i < inner; i++)
                cout << " ";
            cout << tex << endl;

            left--;
            inner += 2;
        };

        left += 2;
        inner -= 4;

        while (inner >= 0) {
            for (int i = 0; i < left; i++)
                cout << " ";
            cout << tex;
            for (int i = 0; i < inner; i++)
                cout << " ";
            cout << tex << endl;

            left++;
            inner -= 2;
        };
        
        if (inner == -1) {
            for (int i = 0; i < left; i++)
                cout << " ";
            cout << tex << endl;
        }

        break;
    }
    case 9: {
        cout << "[+] Размер: ";
        int size;
        cin >> size;

        if (size <= 0)
            goto invalid_value;

        for (int y = 0; y < size; y++) {
            if (y % 2 == 0) {
                for (int i = 0; i < size; i++) {
                    cout << tex;
                }
            }
            else {
                if ((y / 2) % 2 == 0) {
                    for (int i = 0; i < size - 1; i++) {
                        cout << " ";
                    }
                    cout << tex;
                }
                else {
                    cout << tex;
                }
            }

            cout << endl;
        }

        break;
    }
    case 10: {
        cout << "[+] Размер: ";
        int size;
        cin >> size;

        if (size <= 0)
            goto invalid_value;

        for (int y = 0; y < size; y++) {
            for (int x = 0; x < size; x++) {
                int d = max(
                    abs(x - size / 2), 
                    abs(y - size / 2)
                );

                if (d % 2 == 0) {
                    cout << tex;
                }
                else {
                    cout << ' ';
                }
            }
            cout << endl;
        }

        break;
    }
    }

    return 0;

invalid_value:
    cout << "[-] Недопустимое значение!" << endl;
    return 1;
}

char question(int n) {
    switch (n) {
    case 1:
        cout
            << "[1] Вопрос : Системный язык программирования ? " << endl
            << "[A] Python [B] С#" << endl
            << "[C] Ruby   [D] C++" << endl;

        return 'D';
    case 2:
        cout
            << "[2] Вопрос : Какая из перечисленных клавиш стандартной QWERTY-клавиатуры НЕ является парной?" << endl
            << "[A] Ctrl [B] Tab" << endl
            << "[C] Alt  [D] Shift" << endl;

        return 'B';
    case 3:
        cout
            << "[3] Вопрос : Общедоступная мультиязычная универсальная Интернет-энциклопедия, основанная Ларри Сэнгером и Джимми Уэйлсом, называется... " << endl
            << "[A] Хабрхабр  [B] Большой энциклопедический словарь" << endl
            << "[C] Википедия [D] Британская энциклопедия" << endl;

        return 'C';
    case 4:
        cout
            << "[4] Вопрос : После выключения компьютера пропадает информация, находящаяся..." << endl
            << "[A] в оперативной памяти [B] на жёстком диске" << endl
            << "[C] на CD-диске          [D] на USB - флеш - накопителе" << endl;

        return 'A';
    case 5:
        cout
            << "[5] Вопрос : У Эллочки в бусах А7(16) бусинок, а у её подруги Людочки на 100(3) бусинок меньше. Сколько бусинок в бусах у Людочки?" << endl
            << "[A] 9F(16)  [B] 10011110(2)" << endl
            << "[C] 137(8)  [D] 159(10)" << endl;

        return 'B';
    case 6:
        cout
            << "[6] Вопрос : Укажите устройства вывода информации " << endl
            << "[A] Монитор [B] Клавиатура" << endl
            << "[C] Мышь    [D] Сканер " << endl;

        return 'A';
    case 7:
        cout
            << "[7] Вопрос : Macintosh – линейка персональных компьютеров, спроектированных, разработанных, производимых и продаваемых фирмой " << endl
            << "[A] Apple [B] Dell" << endl
            << "[C] IBM   [D] Compaq" << endl;

        return 'A';
    case 8:
        cout
            << "[8] Вопрос : Какой объем памяти имела автоматическая цифровая вычислительная машина М-1 ? " << endl
            << "[A] 256 слов  [B] 1024 слов" << endl
            << "[C] 1000 слов [D] 1 000 000 слов" << endl;

        return 'A';
    case 9:
        cout
            << "[9] Вопрос : Какого числа отмечается День программиста? " << endl
            << "[A] 1 сентября  [B] 13 сентября" << endl
            << "[C] 12 сентября [D] 4 декабря" << endl;

        return 'C';
    case 10:
        cout
            << "[10] Вопрос : Мотылек замкнул крылышками контакты. Какое жаргонное слово в программировании появилось по этому случаю? " << endl
            << "[A] error   [B] breakdown" << endl
            << "[C] mistake [D] bug" << endl;

        return 'D';
    case 11:
        cout
            << "[11] Вопрос : Какому устройству дал имя винтовочный патрон американского происхождения? " << endl
            << "[A] ROM [B] RAM" << endl
            << "[C] HDD [D] CPU" << endl;

        return 'C';
    case 12:
        cout
            << "[12] Вопрос : Какова была тактовая частота у первой модели персонального компьютера фирмы IBM? " << endl
            << "[A] 4,77 ГГц [B] 8800 Гц" << endl
            << "[C] 8 МГц    [D] 4,77 МГц" << endl;

        return 'D';
    default:
        cout << "Ошибка";
        return '\xFF';
    }
}

int work12() {
    string name = "Игрок";
    int questions_count = 10;

    while (true) {
        cout
            << " Главное меню " << endl
            << "1. Начать игру" << endl
            << "2.  Настройки " << endl
            << "3.   Правила  " << endl
            << "4.    Выйти   " << endl
            << endl
            << ": ";

        int i;
        cin >> i;

        switch (i) {
        case 1: {
            int points = 0;
            int lives = 3;
            int n = 1;

            while (true) {
                cout << endl << "[+] Игрок: " << name << " | жизни: " << lives << " | очки: " << points << "" << endl;
                char correct = question(n);
                cout << "[+] Выбрать ответ: ";
                char user_choice; cin >> user_choice;

                if (user_choice == correct) {
                    points++;
                    cout << "Ответ правильный!" << endl;
                }
                else {
                    lives--;
                    cout << "Ответ неправильный!" << endl;
                }

                if (lives == 0) {
                    cout
                        << "Жизни кончились!" << endl
                        << "Вы проиграли!" << endl;
                    break;
                }

                n++;
                if (n > questions_count) {
                    cout
                        << "Викторина окончена" << endl
                        << "Набрано баллов: " << points << endl
                        << "Жизней осталось: " << lives << endl
                        << endl;
                    break;
                }
            }
            break;
        }   
        case 2:
            cout 
                << "Настройка" << endl
                << "1. В главное меню." << endl
                << "2. Сменить имя. (" << name << ")" << endl
                << "3. Изменить количество вопросов. (" << questions_count << ")" << endl
                << endl
                << ": ";

            cin >> i;
            
            
            switch (i) {
            case 1:
                break;
            case 2:
                cout << "Введите новое имя: ";
                cin >> name;
                break;
            case 3:
                cout << "Введите количество вопросов (8-12): ";
                cin >> questions_count;

                if (questions_count < 8 || questions_count > 12)
                    goto invalid_value;

                break;
            default:
                goto invalid_value;
            }
            break;
        case 3:
            cout 
                << endl
                << "Правила:" << endl
                << "- Игрок получает очки за правильный ответ на вопрос;" << endl
                << "- Игрок проходит дальше за правильный ответ;" << endl
                << "- Игрок теряет жизнь при неправильном ответе." << endl
                << endl;
            break;
        case 4:
            cout << "Выход" << endl;
            return 0;
        default:
            goto invalid_value;
        }
    }

invalid_value:
    cout << "Недопустимое значение!" << endl;
    return 1;
}

int main()
{
    setlocale(0, "");
    return work11_13_14_15_16_17_18_19_20_21(); 
}

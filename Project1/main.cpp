#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleOutputCP(65001);


    //1
    int day1 = 0, mnth1 = 0, yr1 = 0;
    int day2 = 0, mnth2 = 0, yr2 = 0;

    // Ввод данных пользователем
    std::cout << "Введите первую дату (день месяц год через пробел): ";
    std::cin >> day1 >> mnth1 >> yr1;

    std::cout << "Введите вторую дату (день месяц год через пробел): ";
    std::cin >> day2 >> mnth2 >> yr2;


    // --- Вычисление дней для ПЕРВОЙ даты ---
    long long totalDays1 = day1;

    for (int y = 1; y < yr1; ++y) {
        int isLeap = 0;
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
            isLeap = 1;
        }
        if (isLeap == 1) {
            totalDays1 += 366;
        }
        else {
            totalDays1 += 365;
        }
    }

    for (int m = 1; m < mnth1; ++m) {
        int days = 31;
        if (m == 4 || m == 6 || m == 9 || m == 11) {
            days = 30;
        }
        else if (m == 2) {
            int isLeap = 0;
            if ((yr1 % 4 == 0 && yr1 % 100 != 0) || (yr1 % 400 == 0)) {
                isLeap = 1;
            }
            if (isLeap == 1) {
                days = 29;
            }
            else {
                days = 28;
            }
        }
        totalDays1 += days;
    }

    // --- Вычисление дней для ВТОРОЙ даты ---
    long long totalDays2 = day2;

    for (int y = 1; y < yr2; ++y) {
        int isLeap = 0;
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
            isLeap = 1;
        }
        if (isLeap == 1) {
            totalDays2 += 366;
        }
        else {
            totalDays2 += 365;
        }
    }

    for (int m = 1; m < mnth2; ++m) {
        int days = 31;
        if (m == 4 || m == 6 || m == 9 || m == 11) {
            days = 30;
        }
        else if (m == 2) {
            int isLeap = 0;
            if ((yr2 % 4 == 0 && yr2 % 100 != 0) || (yr2 % 400 == 0)) {
                isLeap = 1;
            }
            if (isLeap == 1) {
                days = 29;
            }
            else {
                days = 28;
            }
        }
        totalDays2 += days;
    }

    // --- Разность и модуль ---
    long long diff = totalDays1 - totalDays2;
    if (diff < 0) {
        diff = -diff;
    }

    // Вывод результата
    std::cout << "Разность в днях: " << diff << "\n";

    int count = 0;

    std::cout << "Введите количество элементов: ";
    std::cin >> count;

    if (count <= 0) 
    {
        std::cout << "Ошибка: количество элементов должно быть больше 0!\n";
    }
    else 
    {
        double sum = 0.0;
        std::cout << "Введите числа по очереди через пробел:\n";
        for (int i = 0; i < count; ++i) {
            double numbernow = 0.0;
            std::cin >> numbernow; // Считываем число прямо «на лету»
            sum += numbernow;     // Сразу добавляем его к общей сумме
        }

        double average = sum / count;
        std::cout << "Среднее арифметическое: " << average << "\n";
    }

    //2
    int size = 0;
    
    std::cout << "Введите количество элементов: ";
    std::cin >> size;
    
    if (size <= 0) {
        std::cout << "Ошибка: количество элементов должно быть больше 0!\n";
    } else {
        int positiveCount = 0;
        int negativeCount = 0;
        int zeroCount = 0;
        
        std::cout << "Введите числа по очереди через пробел или Enter:\n";
        for (int i = 0; i < size; ++i) {
            int currentNumber = 0;
            std::cin >> currentNumber; // Считываем текущее число
            
            // Сразу проверяем его тип и увеличиваем нужный счетчик
            if (currentNumber > 0) {
                positiveCount++;
            } else if (currentNumber < 0) {
                negativeCount++;
            } else {
                zeroCount++;
            }
        }
        
        std::cout << "Положительных элементов: " << positiveCount << "\n";
        std::cout << "Отрицательных элементов: " << negativeCount << "\n";
        std::cout << "Нулевых элементов: " << zeroCount << "\n";
    
     }
    //3
    int size = 0;

    std::cout << "Введите количество элементов: ";
    std::cin >> size;

    if (size <= 0) {
        std::cout << "Ошибка: количество элементов должно быть больше 0!\n";
    }
    else {
        int positivenum = 0;
        int negativenum = 0;
        int zeronum = 0;

        std::cout << "Введите числа по очереди через пробел или Enter:\n";
        for (int i = 0; i < size; ++i) {
            int currentnum = 0;
            std::cin >> currentnum; // Считываем текущее число

            // Сразу проверяем его тип и увеличиваем нужный счетчик
            if (currentnum > 0) {
                positivenum++;
            }
            else if (currentnum < 0) {
                negativenum++;
            }
            else {
                zeronum++;
            }
        }

        std::cout << "Положительных элементов: " << positivenum << "\n";
        std::cout << "Отрицательных элементов: " << negativenum << "\n";
        std::cout << "Нулевых элементов: " << zeronum << "\n";
    }

    return 0;


}
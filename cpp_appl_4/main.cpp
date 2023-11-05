#include<Windows.h>
#include <iostream>

int main() {
    double num1, num2;
    double result;
    char operation;
    double* ptr1, * ptr2, * ptrResult;

    ptr1 = &num1;
    ptr2 = &num2;
    ptrResult = &result;
    system("chcp 1251");
    system("cls");

    std::cout << "Введіть перше число: ";
    std::cin >> *ptr1;

    std::cout << "Введіть операцію (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Введіть друге число: ";
    std::cin >> *ptr2;

    switch (operation) {
    case '+':
        *ptrResult = *ptr1 + *ptr2;
        break;
    case '-':
        *ptrResult = *ptr1 - *ptr2;
        break;
    case '*':
        *ptrResult = *ptr1 * *ptr2;
        break;
    case '/':
        if (*ptr2 != 0) {
            *ptrResult = *ptr1 / *ptr2;
        }
        else {
            std::cout << "Помилка: ділення на нуль." << std::endl;
            return 1; // Вихід з програми з помилкою
        }
        break;
    default:
        std::cout << "Невідома операція." << std::endl;
        return 1; // Вихід з програми з помилкою
    }

    std::cout << "Результат: " << *ptrResult << std::endl;

    return 0;
}

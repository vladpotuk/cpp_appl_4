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

    std::cout << "������ ����� �����: ";
    std::cin >> *ptr1;

    std::cout << "������ �������� (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "������ ����� �����: ";
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
            std::cout << "�������: ������ �� ����." << std::endl;
            return 1; // ����� � �������� � ��������
        }
        break;
    default:
        std::cout << "������� ��������." << std::endl;
        return 1; // ����� � �������� � ��������
    }

    std::cout << "���������: " << *ptrResult << std::endl;

    return 0;
}

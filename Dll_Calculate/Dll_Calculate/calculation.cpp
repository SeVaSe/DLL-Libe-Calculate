// calculation.cpp
#include "calculation.h"
#include <string>
#include <sstream>
#include <cmath>
#include "pch.h"

// ������� ��� ���������� �������� ���������
double calculateExpression(const char* expression) {
    std::istringstream iss(expression);
    double result = 0.0;
    iss >> result;
    char op;
    while (iss >> op) {
        double operand;
        iss >> operand;
        switch (op) {
            case '+':
                result += operand;
                break;
            case '-':
                result -= operand;
                break;
            case '*':
                result *= operand;
                break;
            case '/':
                if (operand != 0) {
                    result /= operand;
                } else {
                    // ��������� ������ ������� �� ����
                    return NAN;
                }
                break;
            default:
                // ��������� ������������� ���������
                return NAN;
        }
    }
    return result;
}

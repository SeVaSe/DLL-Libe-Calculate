// math_functions.h
#ifndef MATH_FUNCTIONS_H
#define MATH_FUNCTIONS_H

#ifdef __cplusplus
extern "C" {
#endif

    __declspec(dllexport) double calculateExpression(double a, double b) {
        return a * b; // ������ ����������: ������������ ���� �����
    }

#ifdef __cplusplus
}
#endif

#endif // MATH_FUNCTIONS_H

// calculation.h
#ifndef CALCULATION_H
#define CALCULATION_H

#ifdef __cplusplus
extern "C" {
#endif

	// ������� ��� ���������� �������� ���������
	__declspec(dllexport) double calculateExpression(const char* expression);

#ifdef __cplusplus
}
#endif

#endif // CALCULATION_H

#include <iostream>
#include <Windows.h> // Подключаем заголовочный файл Windows.h для работы с DLL

// Объявляем тип функции, которая находится в DLL
typedef double (*CalculateExpressionFunc)(const char* expression);

int main() {
    // Загружаем DLL
    HINSTANCE hDLL = LoadLibrary(L"C:\\VISUAL_STUDIO_\\Vs_Project\\C++\\OTHER_WORK\\Dll_Calculate\\x64\\Debug\\Dll_Calculate.dll");

    if (hDLL != NULL) {
        // Получаем указатель на функцию calculateExpression из DLL
        CalculateExpressionFunc calculateExpression = (CalculateExpressionFunc)GetProcAddress(hDLL, "calculateExpression");

        if (calculateExpression != NULL) {
            const char* expr = "2 * 3 * 4"; 
            double result = calculateExpression(expr);
            std::cout << "Result: " << result << std::endl;
        }
        else {
            std::cout << "Failed to load function from DLL." << std::endl;
        }

        // Выгружаем DLL
        FreeLibrary(hDLL);
    }
    else {
        std::cout << "Failed to load DLL." << std::endl;
    }

    return 0;
}


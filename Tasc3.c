#include <stdio.h>
#include <locale.h>

// Задание 3: сдвиг указателя для разных типов
int main() {
    setlocale(LC_ALL, ".UTF8");
    int* pa; int x = 5;
    pa = &x;
    printf("int:   %p  инкремент смещает на %d байт\n", (void*)pa, (int)sizeof(int));

    double* pd; double d = 5.0;
    pd = &d;
    printf("double: %p  инкремент смещает на %d байт\n", (void*)pd, (int)sizeof(double));

    char* pc; char c = 'A';
    pc = &c;
    printf("char:  %p  инкремент смещает на %d байт\n", (void*)pc, (int)sizeof(char));

    long double* pld; long double ld = 1.0L;
    pld = &ld;
    printf("long double: %d байт\n", (int)sizeof(long double));

    short unsigned int* ps; short unsigned int s = 1;
    ps = &s;
    printf("short unsigned int: %d байт\n", (int)sizeof(short unsigned int));

    _Bool* pb; _Bool b = 1;
    pb = &b;
    printf("_Bool: %d байт\n", (int)sizeof(_Bool));
}
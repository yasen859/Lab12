#include <stdio.h>
#include <locale.h>

void bytes(const void* p, unsigned long n)//побайтовая печать
{
    unsigned char* b = (unsigned char*)p;
    for (unsigned long i = 0; i < n; i++)
        printf("%.2x ", b[i]);
    printf("\n");
    
    for (unsigned long i = 0; i < n; i++)
        printf("%p ", (void*)(b + i));
    printf("\n");
}


int main() {
    setlocale(LC_ALL, ".UTF8");
    int x = 0x12345678;
    int* prt = &x;
    unsigned char* a = (unsigned char*)prt;  /* указатель на байт */
    
    unsigned char* a1 = a + 3, * a2 = a + 2, * a3 = a + 1, * a4 = a;
    
    printf("Байты x = 0x12345678 по адресам a+0..a+3:\n");
    printf("%.2x\n %.2x\n %.2x\n %.2x\n", *a4, *a3, *a2, *a1);
    
    float  f = 12345.0f;
    double d = 12345.0;
    printf("float  12345 : "); 
    bytes(&f, sizeof f);
    printf("double 12345 : "); 
    bytes(&d, sizeof d);

    return 0;
}

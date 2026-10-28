#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, ".UTF8");
    float array[10] = { 1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f, 7.7f, 8.8f, 9.9f, 10.10f };
    float* ptr_a;
    
    printf("array    = %p\n", (void*)array);
    printf("&array[0]= %p\n", (void*)&array[0]);
    printf("&array   = %p\n", (void*)&array);
    
    ptr_a = array;
    printf("\n4.2: указатель на начало массива ptr=%p, *ptr=%.1f\n", (void*)ptr_a, *ptr_a);

    ptr_a++;                       
    printf("ptr_a++:   ptr=%p, *ptr=%.1f\n", (void*)ptr_a, *ptr_a);

    printf("ptr_a+4:   ptr=%p, *ptr=%.1f\n", (void*)(ptr_a + 4), *(ptr_a + 4));
    printf("ptr_a-2:   ptr=%p, *ptr=%.1f\n", (void*)(ptr_a - 2), *(ptr_a - 2));

    
    printf("\n4.3:  цикл прохода по массиву с помощью указателя с прямом порядке с увеличением указателя на 2\n");
    for (ptr_a = array; ptr_a < array + 10; ptr_a += 2)
        printf("ptr=%p, *ptr=%.1f\n", (void*)ptr_a, *ptr_a);

    
    printf("\n4.4:роход по массиву в обратном порядке, предварительно установив указатель на конец массива с использованием операции декремента\n");
    ptr_a = array + 9;             
    for (; ptr_a >= array; ptr_a--)
        printf("ptr=%p, *ptr=%.1f\n", (void*)ptr_a, *ptr_a);

    
    return 0;
}
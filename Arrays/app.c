#include <stdio.h>
#include <stdlib.h>
#include "array.h"

#define SIZE 100

int main() {
    puts("Лабораторные работы 11, 14, 16, 19, 25: Работа с массивами ===\n");
    
    int size;
    puts("Укажите размер массива");
    scanf("%d", &size);

    task14(size);
    task16(size);

    return 0;
}


int task14(int size) {

    double array[SIZE];

    // Задание 1. Заполнение массива
   
    full_elements(array, size);
    put_elements(array, size);

    // Задание 2. Преобразование массива
   
    calc_elements(array, size);
    put_elements(array, size);

}
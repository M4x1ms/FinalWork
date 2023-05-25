#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


int main() {

    // srand(time(NULL));
    setlocale(LC_ALL, "Rus");
    int M[10][10];

    int A[20];// massiv 

    int* iA = A;

    printf("Часть А\n\n Массив:\n ");
    for (int i = 0; i < 20; i++) {
        *iA = rand() % 101 - 50;
        printf("%5d\n", *iA);
        iA++;
    }
    printf("\n");
    iA = A;
    printf("Отрицательные:\n");
    for (int i = 0; i < 20; i++) {
        if (*(iA + i) < 0) printf("%5d", *(iA + i));
    }
    printf("\n");
    printf("Неотрицательные:\n");
    for (int i = 0; i < 20; i++) {
        if (*(iA + i) >= 0) printf("%5d", *(iA + i));
    }

    printf("\nЧасть Б\n\n");
    printf("\nМатрица:\n\n");
    int* m = (int*)M;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            *(m + i * 10 + j) = (rand() % 101) - 50;
            printf("%5d", *(m + i * 10 + j));
        }
        printf("\n");
    }

    printf("\nМатрица транспонированная:\n\n");
    for (int i = 0; i < 10; i++) {
        double sum = 0;
        for (int j = 0; j < 10; j++) {
            sum += *(m + i + j * 10);
            printf("%5d", *(m + i + j * 10));

        }
        printf("\n");
        printf("\n Среднее арифметическое=%.1f\n", sum / 10);
    }


    _getch();
}

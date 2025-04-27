#include <stdio.h>
#include "exercises.h"

int main(void)
{
    // Pruebas de las funciones
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Función calcSum
    printf("calcSum: %d\n", calcSum(arr, n));

    // Función findMax
    printf("findMax: %d\n", findMax(arr, n));

    // Función calcAverage
    printf("calcAverage: %.2f\n", calcAverage(arr, n));

    // Función countEvens
    printf("countEvens: %d\n", countEvens(arr, n));

    // Función sumFirstLast
    printf("sumFirstLast: %d\n", sumFirstLast(arr, n));

    // Función findMin
    printf("findMin: %d\n", findMin(arr, n));

    // Función subtractArraysSum
    int arr2[] = {5, 4, 3, 2, 1};
    printf("subtractArraysSum: %d\n", subtractArraysSum(arr, arr2, n));

    // Función mergeArraysSum
    int arr3[] = {6, 7, 8};
    int arr4[] = {9, 10, 11};
    printf("mergeArraysSum: %d\n", mergeArraysSum(arr3, 3, arr4, 3));

    // Función productArray
    printf("productArray: %d\n", productArray(arr, n));

    // Función calcSumAverage (con punteros)
    int sum = 0;
    float average = 0.0;
    calcSumAverage(arr, n, &sum, &average);
    printf("calcSumAverage - Sum: %d, Average: %.2f\n", sum, average);

    return 0;
}

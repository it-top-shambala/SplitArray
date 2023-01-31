// Старинин Андрей
/*
 * https://github.com/it-top-shambala/SplitArray.git
 *
 * Написать программу, которая из массива распределяет положительные, отрицательные и нулевые элементы в отдельные динамические массивы.
 */

#include <iostream>
#include "array_functions_helpers.h"
#include "array_functions_split.h"

int main() {
    const int SIZE = 10;
    int source[SIZE];
    RandomFillArray(source, SIZE, -5, 5);
    PrintArray(source, SIZE);

    int positive_size;
    int* positives = CopyPositiveNumbers(source, SIZE, positive_size);
    PrintArray(positives, positive_size);

    int negative_size;
    int* negatives = CopyNegativeNumbers(source, SIZE, negative_size);
    PrintArray(negatives, negative_size);

    int zeros_size;
    int* zeros = CopyZeros(source, SIZE, zeros_size);
    PrintArray(zeros, zeros_size);

    return 0;
}

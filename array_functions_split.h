#pragma once

int CalcPositiveNumbers(int* arr, int size) {
    int positive = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) {
            positive++;
        }
    }

    return positive;
}

int CalcNegativeNumbers(int* arr, int size) {
    int negative = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            negative++;
        }
    }

    return negative;
}

int CalcZeros(int* arr, int size) {
    int zero = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == 0) {
            zero++;
        }
    }

    return zero;
}
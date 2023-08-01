#include <stdio.h>

// Function to find the maximum element in an array of integers
int findMaxInt(const int arr[], int size) {
    if (size == 0) {
        // Handle the case of an empty array (could throw an error or return a default value)
        printf("Error: Empty array!\n");
        return 0;
    }

    int max = arr[0]; // Initialize max with the first element

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

// Function to find the maximum element in an array of doubles
double findMaxDouble(const double arr[], int size) {
    if (size == 0) {
        // Handle the case of an empty array (could throw an error or return a default value)
        printf("Error: Empty array!\n");
        return 0.0;
    }

    double max = arr[0]; // Initialize max with the first element

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int intArr[] = { 5, 12, 7, 9, 3, 8, 10 };
    double doubleArr[] = { 3.14, 2.718, 1.414, 2.0, 3.0, 1.0 };

    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    double doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);

    int maxInt = findMaxInt(intArr, intSize);
    printf("Maximum integer in the array: %d\n", maxInt);

    double maxDouble = findMaxDouble(doubleArr, doubleSize);
    printf("Maximum double in the array: %lf\n", maxDouble);

    return 0;
}


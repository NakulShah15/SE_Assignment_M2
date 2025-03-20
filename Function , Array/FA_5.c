//5. WAP to take two Array input from user and sort them in ascending or descending order as per user's choice

#include <stdio.h>

void sortArray(int arr[], int size, int order) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if ((order == 1 && arr[j] > arr[j + 1]) || (order == 2 && arr[j] < arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void inputArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n, choice;
    
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    printf("Enter elements of first array: ");
    inputArray(arr1, n);

    printf("Enter elements of second array: ");
    inputArray(arr2, n);

    printf("Choose sorting order: 1 for Ascending, 2 for Descending: ");
    scanf("%d", &choice);

    sortArray(arr1, n, choice);
    sortArray(arr2, n, choice);

    printf("Sorted first array: ");
    printArray(arr1, n);

    printf("Sorted second array: ");
    printArray(arr2, n);

    return 0;
}


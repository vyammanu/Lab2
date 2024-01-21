#include <stdio.h>

/**
 * Sorts an array of integers using the Insertion Sort algorithm.
 *
 * @param arr The array to be sorted.
 * @param N The number of elements in the array.
 */
void insertionSort(int arr[], int N) {
    int temp, currLoc;
    for (int i = 1; i < N; i++) {
        currLoc = i;
        while (currLoc > 0 && arr[currLoc - 1] > arr[currLoc]) {
            // Swap elements if they are out of order
            temp = arr[currLoc];
            arr[currLoc] = arr[currLoc - 1];
            arr[currLoc - 1] = temp;
            currLoc--;
        }
    }
}

int main() {
    int N;

    // Input: Number of elements in the array
    printf("Please enter the number of elements in the array: ");
    scanf("%d", &N);
    
    int arr[N];
    
    // Input: Elements of the array
    for (int i = 0; i < N; i++) {
        printf("Please enter element %d of the array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display the given array
    printf("Given array is: [");
    for (int i = 0; i < N - 1; i++) {
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[N - 1]);

    // Perform Insertion Sort
    insertionSort(arr, N);

    // Display the sorted array
    printf("Sorted array is: [");
    for (int i = 0; i < N - 1; i++) {
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[N - 1]);

    return 0;
}

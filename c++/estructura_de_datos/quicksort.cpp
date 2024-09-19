#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            ++i;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);

    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {54, 37, 81, 12, 95, 6, 23, 68, 47, 76, 29, 42};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Lista original: ";
    printArray(arr, size);

    quickSort(arr, 0, size - 1);

    cout << "Lista ordenada: ";
    printArray(arr, size);

    return 0;
}

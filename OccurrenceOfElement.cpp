#include <iostream>

int countOccurrences(int arr[], int size, int ele) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == ele) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {54, 22, 3, 54, 1, 99, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ele = 54;

    int occurrences = countOccurrences(arr, size, ele);

    std::cout << "The element " << ele << " occurs " << occurrences << " times in the array." << std::endl;

    return 0;
}

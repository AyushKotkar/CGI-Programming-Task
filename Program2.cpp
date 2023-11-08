// Q2. Reverse an array in place:

#include <iostream>

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    
    while (start < end) {
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    reverseArray(arr, size);
    
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    
    return 0;
}

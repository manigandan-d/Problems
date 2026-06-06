#include <iostream>

using namespace std; 

int removeDuplicates(int arr[], int n) {
    int i = 0;

    for (int j = 1; j < n; j++) {
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1; 
}

int main() {
    int arr[] = {1, 1, 2, 2, 2, 3, 4, 4};
    int n = 8; 

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    int newLen = removeDuplicates(arr, n);

    cout << "\nArray after removing duplicates: ";
    for (int i = 0; i < newLen; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; 

    return 0;
}
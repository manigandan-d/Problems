#include <iostream>

using namespace std; 

void moveZerosToEnd(int arr[], int n) {
    int index=0;
    
    for (int i=0; i<n; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }
    
    while (index < n) {
        arr[index++] = 0;
    }
}

int main()
{
    int arr[] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    moveZerosToEnd(arr, n);
    
    cout << "Array after moving zeros: ";
    
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; 

    return 0;
}

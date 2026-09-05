#include <iostream>

using namespace std; 

void sortArray(int arr[], int n) {
    int count0 = 0; 
    int count1 = 0; 
    int count2 = 0; 
    int index = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) 
            count0++;
        else if (arr[i] == 1) 
            count1++;
        else 
            count2++;
    }
    
    while (count0--) {
        arr[index++] = 0;
    }
    
    while (count1--) {
        arr[index++] = 1;
    }
    
    while (count2--) {
        arr[index++] = 2; 
    }
}

int main()
{
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0};
    int n = 11;
    
    sortArray(arr, n);
    
    cout << "Sorted array: ";
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; 
    
    return 0;
}

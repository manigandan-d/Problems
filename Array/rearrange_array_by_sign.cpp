#include <iostream>

using namespace std; 

void rearrangeBySign(int arr[], int n) {
    int result[n];
    int positiveIdx = 0;
    int negativeIdx = 1;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            result[positiveIdx] = arr[i];
            positiveIdx += 2;
        }
        else {
            result[negativeIdx] = arr[i];
            negativeIdx += 2;
        }
    }
    
    for (int i = 0; i < n; i++) {
        arr[i] = result[i];
    }
}

int main()
{
    int arr[] = {3, 1, -2, -5, 2, -4};
    int n = 6;
    
    rearrangeBySign(arr, n);
    
    cout << "Rearranged array: ";
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; 
    
    return 0;
}

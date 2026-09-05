#include <iostream>

using namespace std; 

int majorityElement(int arr[], int n) {
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        count = 0;
        
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        
        if (count > n/2) {
            return arr[i];
        }
    }
    
    return -1; 
}

int main()
{
    int arr[] = {2, 2, 3, 3, 1, 2, 2};
    int n = 7;
    
    cout << "Majority element: " << majorityElement(arr, n);
    
    return 0;
}

#include <iostream>

using namespace std; 

void twoSum(int arr[], int n, int target) {
    int sum = 0; 
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Indices: " << i << " " << j << endl; 
                return; 
            }
        }
    }
    
    cout << "No pair found" << endl; 
}

int main()
{
    int arr[] = {2, 6, 5, 8, 11};
    int n = 5;
    int target = 14;
    
    twoSum(arr, n, target);
    
    return 0;
}

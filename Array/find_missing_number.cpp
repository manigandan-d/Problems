#include <iostream>

using namespace std; 

int findMissingNumber(int arr[], int n) {
    int i = 1;
    int found = 0;
    
    for (i=1; i<=n; i++) {
        found = 0;
        
        for (int j=0; j<n; j++) {
            if (arr[j] == i) {
                found = 1; 
                break; 
            }
        }
        
        if (found == 0) 
            return i;
    }
    
    return -1;
}

int main() 
{
    int arr[] = {5, 4, 1, 2};
    int n = 5; 
    
    cout << "Missing number: " << findMissingNumber(arr, n) << endl;
    
    return 0;
}

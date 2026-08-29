#include <iostream>

using namespace std; 

int findSingleElement(int arr[], int n) {
    int count = 0;
    
    for (int i=0; i<n; i++) {
        count = 0;
        
        for (int j=0; j<n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        } 
        
        if (count == 1) 
            return arr[i];
    }
    
    return -1;
}

int main() 
{
    int arr[] = {4, 1, 2, 5, 2, 4, 1};
    int n = 7; 
    
    cout << "Element that appears once: " << findSingleElement(arr, n) << endl;
    
    return 0;
}

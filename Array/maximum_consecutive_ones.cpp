#include <iostream>

using namespace std; 

int maximumConsecutiveOnes(int arr[], int n) {
    int maxCount = 0;
    int count = 0;
    
    for (int i=0; i<n; i++) {
        if (arr[i] == 1) {
            count++;
            
            if (count > maxCount) {
                maxCount = count; 
            }
        }
        else {
            count = 0;
        }
    }
    
    return maxCount;
}

int main() 
{
    int arr[] = {0, 1, 1, 0, 1, 1, 1, 0, 1, 1};
    int n = 10; 
    
    cout << "Maximum consecutive ones: " << maximumConsecutiveOnes(arr, n) << endl;
    
    return 0;
}

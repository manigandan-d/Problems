#include <iostream>

using namespace std; 

int longestSubarray(int arr[], int n, int k) {
    int maxLength = 0;
    int sum = 0;
    int length = 0;
    
    for (int i=0; i<n; i++) {
        sum = 0;
        
        for (int j=i; j<n; j++) {
            sum += arr[j];
            
            if (sum == k) {
                length = j - i + 1;
                
                if (length > maxLength) {
                    maxLength = length;
                }
            }
            
            if (sum > k) {
                break;
            }
        }
    }
    
    return maxLength;
}

int main()
{
    int arr[] = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};  // Positives
	// int arr[] = {1, -2, 3, 1, -1, 1, 1, 4, 2, 3};  // Positives + Negatives 
    int n = 10;
    int k = 3;
    
    cout << "Longest subarray length: " << longestSubarray(arr, n, k) << endl;
    
    return 0;
}

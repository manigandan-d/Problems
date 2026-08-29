#include <iostream>

using namespace std; 

int linearSearch(int arr[], int n, int target) {
   for (int i=0; i<n; i++) {
       if (arr[i] == target) {
           return i;
       }
   } 
   
   return -1; 
}

int main()
{
    int arr[] = {6, 7, 8, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;
    
    int index = linearSearch(arr, n, target);
    
    if (index != -1) 
        cout << "Element found at index: " << index << endl; 
    else 
        cout << "Element not found" << endl; 

    return 0;
}

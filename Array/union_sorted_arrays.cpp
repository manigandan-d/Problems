#include <iostream>
#include <vector>

using namespace std; 

vector<int> findUnion(int arr1[], int n1, int arr2[], int n2) {
    vector<int> result; 
    int i = 0, j = 0;
    
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            if (result.empty() || result.back() != arr1[i]) {
                result.push_back(arr1[i]);
            }
            i++;
        }
        
        else if (arr1[i] > arr2[j]) {
            if (result.empty() || result.back() != arr2[j]) {
                result.push_back(arr2[j]);
            }
            j++;
        }
        
        else {
            if (result.empty() || result.back() != arr1[i]) {
                result.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }
    
    while (i < n1) {
        if (result.empty() || result.back() != arr1[i]) {
            result.push_back(arr1[i]);
        }
        i++;
    }
    
    while (j < n2) {
        if (result.empty() || result.back() != arr2[j]) {
            result.push_back(arr2[j]);
        }
        j++;
    }
    
    return result; 
}

int main()
{
    int arr1[] = {1, 1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 4, 4, 5, 6, 6};
    
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    vector<int> result = findUnion(arr1, n1, arr2, n2);
    
    cout << "Union: ";
    
    for (int element : result) {
        cout << element << " ";
    }
    cout << endl; 

    return 0;
}

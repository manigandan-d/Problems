#include <iostream> 
#include <climits>

using namespace std; 

int main() {
    int arr[] = {3, 7, 2, 9, 8};
    int n = 5; 

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }

        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Second largest element: " << secondLargest << endl; 

    return 0;
}
#include <iostream>

using namespace std; 

void leftRotateByOne(int arr[], int n) {
	if (n <= 1) 
		return;

    int temp = arr[0];
    
    for (int i=1; i<n; i++) {
        arr[i-1] = arr[i];
    }
    
    arr[n-1] = temp;
}

int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    
    cout << "Before rotation: ";
    
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    leftRotateByOne(arr, n);
    
    cout << "After rotation:  ";
    
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

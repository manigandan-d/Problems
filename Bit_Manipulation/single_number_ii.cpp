#include <iostream>

using namespace std; 

int main()
{
    int arr[] = {5, 5, 5, 9, 7, 7, 7};
    int n = 7;
    int result = 0;
    int count = 0;

    for (int i = 0; i < 32; i++) {
        count = 0;
        
        for (int j = 0; j < n; j++) {
            if (arr[j] & (1 << i)) 
                count++;
        }
        
        if ((count % 3) != 0) 
            result |= (1 << i);
    }
    
    cout << result << endl; 

    return 0;
}

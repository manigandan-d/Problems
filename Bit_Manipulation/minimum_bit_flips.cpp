#include <iostream>

using namespace std; 

int minBitFlips(int start, int goal) {
    int n = start ^ goal; 
    int count = 0;
    
    while (n > 0) {
        n = n & (n - 1);
        count++;
    }
    
    return count;
}

int main()
{
    int start, goal;
    
    cin >> start >> goal; 
    
    cout << minBitFlips(start, goal) << endl;

    return 0;
}

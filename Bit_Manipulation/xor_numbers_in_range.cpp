#include <iostream>

using namespace std; 

int xorFromOne(int n) {
    if (n % 4 == 0) 
        return n; 
        
    if (n % 4 == 1) 
        return 1;
        
    if (n % 4 == 2) 
        return n + 1;
        
    return 0;
}

int xorInRange(int L, int R) {
    return xorFromOne(R) ^ xorFromOne(L-1);
}

int main()
{
    int L, R;
    
    cin >> L >> R; 
    
    cout << xorInRange(L, R) << endl;

    return 0;
}

#include <iostream>

using namespace std; 

int main() {
    int n, i;
    
    cin >> n >> i; 
    
    if (n & (1 << i)) 
        cout << "Set" << endl; 
    else 
        cout << "Not set" << endl;
    
    return 0;
}

#include <iostream>

using namespace std; 

int main() {
    int a, b;
    
    cin >> a >> b; 
    
    // a ^ a = 0
    // a ^ 0 = a 
    
    a = a ^ b;  
    b = a ^ b;  // b = (a ^ b) ^ b = a 
    a = a ^ b;  // a = (a ^ b) ^ a = b 
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl; 

    return 0;
}

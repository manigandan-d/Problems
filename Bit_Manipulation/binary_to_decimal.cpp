#include <iostream>

using namespace std; 

int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 1;
    
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') 
            decimal += power;
            
        power *= 2; 
    }
    
    return decimal;
}

int main() {
    string str;
    
    cin >> str; 
    
    cout << binaryToDecimal(str) << endl;

    return 0;
}

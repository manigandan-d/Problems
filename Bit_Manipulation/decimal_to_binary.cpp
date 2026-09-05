#include <iostream>

using namespace std; 

void reverseString(string &str) {
    int left = 0;
    int right = str.length() - 1;
    char temp;
    
    while (left < right) {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp; 
        
        left++;
        right--;
    }
}

string decimalToBinary(int n) {
    string binary; 
    
    while (n > 0) {
        if (n % 2 == 1) 
            binary += '1';
        else 
            binary += '0';
            
        n /= 2;
    }
    
    reverseString(binary);
    
    return binary;
}

int main() {
    int n;
    
    cin >> n; 
    
    cout << decimalToBinary(n) << endl;

    return 0;
}

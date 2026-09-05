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

int main() {
    string str;
    
    cin >> str; 
    
    reverseString(str);
    
    cout << str << endl;

    return 0;
}

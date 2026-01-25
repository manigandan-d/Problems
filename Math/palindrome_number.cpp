#include <iostream>

using namespace std;

bool isPalindrome(int num);

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Palindrome: " << (isPalindrome(num) ? "True" : "False") << endl;
    
    return 0;
}

bool isPalindrome(int num) {
    if (num < 0)
        return false;

    int original = num;
    int reversed = 0;
    int digit;

    while (num != 0) {
        digit = num % 10;
        reversed = (reversed * 10) + digit;
        num /= 10;
    }

    return original == reversed;
}

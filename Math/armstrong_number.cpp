#include <iostream>
#include <cmath>

using namespace std;

bool isArmstrong(int num) {
    if (num < 0)
        return false;  

    int original = num;
    int digits = 0;
    int temp = num;
    int ld; 
    int sum = 0;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

    while (temp != 0) {
        ld = temp % 10;
        sum += pow(ld, digits);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;

    cout << "Armstrong: " << (isArmstrong(num) ? "True" : "False") << endl;

    return 0;
}

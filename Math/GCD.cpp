#include <iostream>

using namespace std;

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);

    int gcd = 1;
    int limit = (a < b) ? a : b;

    for (int i = 1; i <= limit; i++) {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }

    return gcd;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << endl;
    
    return 0;
}

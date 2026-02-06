#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;

    int divisorCount = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            divisorCount++;
    }

    return divisorCount == 2;
}

int main() {
    int n;
    cin >> n;

    cout << (isPrime(n) ? "true" : "false") << endl;
    
    return 0;
}

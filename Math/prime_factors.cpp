#include <iostream>

using namespace std; 

void primeFactors(int n) {
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n = n / i;
        }
    }
    
    cout << endl;
}

int main()
{
    int n; 
    
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "Prime factors: ";
    primeFactors(n);

    return 0;
}

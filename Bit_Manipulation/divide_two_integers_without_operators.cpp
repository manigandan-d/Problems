#include <iostream>

using namespace std; 

int divide(int divident, int divisor) {
    int quotient = 0;
    
    // Repeated subtraction  
    // while (divident >= divisor) {
    //     divident -= divisor;
    //     quotient++;
    // }
    
    while (divident >= divisor) {
        int temp = divisor;
        int multiple = 1;
        
        while ((temp << 1) <= divident) {
            temp <<= 1;
            multiple <<= 1; 
        }
        
        divident -= temp; 
        quotient += multiple;
    }
    
    return quotient;
}

int main() 
{
    int divident, divisor;
    
    cin >> divident >> divisor;
    
    cout << divide(divident, divisor) << endl;
    
    return 0;
}

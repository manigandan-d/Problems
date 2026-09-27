#include <iostream>
#include <vector> 

using namespace std; 

vector<int> singleNumber(vector<int> &arr) {
    int xorAll = 0;
    
    for (auto num : arr) 
        xorAll ^= num;
        
    int bit = xorAll & (-xorAll);
    
    int num1 = 0;
    int num2 = 0;
    
    for (auto num : arr) {
        if (num & (1 << bit)) 
            num1 ^= num; 
        else 
            num2 ^= num;
    }
    
    return {num1, num2};
}

int main()
{
    vector<int> arr = {1, 2, 1, 3, 2, 5};
    
    vector<int> res = singleNumber(arr);
    
    cout << res[0] << " " << res[1] << endl; 

    return 0;
}

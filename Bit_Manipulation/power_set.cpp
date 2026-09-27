#include <iostream>
#include <vector>

using namespace std; 

vector<vector<int>> powerSet(vector<int> &arr) {
    int n = arr.size();
    vector<vector<int>> res; 
    
    for (int mask = 0; mask < (1 << n); mask++) {
        vector<int> subset;
        
        for (int j = 0; j < n; j++) {
            if (mask & (1 << j)) 
                subset.push_back(arr[j]);
        }
        
        res.push_back(subset);
    }
    
    return res; 
}

int main()
{
    int n;
    cin >> n; 
    
    vector<int> arr(n); 
    
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
        
    vector<vector<int>> res = powerSet(arr);
    
    for (auto subset : res) {
        cout << "[ ";
        
        for (auto x : subset) 
            cout << x << " ";
        
        cout << "]";
    }

    return 0;
}

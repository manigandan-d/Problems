#include <iostream>

using namespace std;

void printName(string name, int n)
{
    if (n == 0)
        return;

    cout << name << endl;

    printName(name, n - 1);
}

int main()
{
    int n = 5;

    printName("Mani", n);
    
    return 0;
}

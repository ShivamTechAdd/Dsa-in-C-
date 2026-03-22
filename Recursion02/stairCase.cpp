#include <iostream>
using namespace std;

int stairCase(int n)
{ // n=no of stairs.
    if (n == 2)
        return 2;
    if (n == 1)
        return 1;
    return stairCase(n - 1) + stairCase(n - 2);
}
int main()
{
    int n;
    cout << "Enter value of n:-";
    cin >> n;
    cout << "The no of ways to go on stair is:-" << stairCase(n);
}
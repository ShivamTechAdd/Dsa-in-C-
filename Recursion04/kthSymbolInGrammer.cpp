#include <iostream>
#include <string>
#include <vector>
using namespace std;

int kthGrammar(int n, int k)
{
    if (n == 1)
        return 0;
    if (k % 2 == 0)
    { // flip ans,k/2
        int PrevAns = kthGrammar(n - 1, k / 2);
        if (PrevAns == 0)
            return 1;
        else
            return 0;
    }
    else
    { // k is odd. same ans ,k/2+1.
        int previousAns = kthGrammar(n - 1, k / 2 + 1);
        return previousAns;
    }
}

int main()
{
    int n = 4;
    int k = 7;
    int result = kthGrammar(n, k);
    cout << result;
}
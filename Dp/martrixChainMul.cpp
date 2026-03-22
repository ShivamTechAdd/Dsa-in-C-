#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

//top down dp;
vector<vector<int>>dp;
int f(int i, int j, vector<int> &arr)
{
    if (i == j || i + 1 == j)
        return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans = INT_MAX;
    for (int k = i + 1; k < j; k++)
    {
        ans = min(ans, f(i, k, arr) + f(k, j, arr) + arr[i] * arr[k] * arr[j]);
    }
    return dp[i][j] = ans;
}

int main()
{
    int n;
    cout<<"Enter n:-";
    cin >> n;
    dp.clear();
    dp.resize(10005,vector<int>(10000,-1));
    vector<int> arr(n);
    cout<<"Eneter element of array:-";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << f(0, n - 1, arr) << endl;
}
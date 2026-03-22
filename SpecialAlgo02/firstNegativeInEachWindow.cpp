#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {7, -3, 4, 4, -7, -1, -2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;

    int k = 4;
    vector<int> ans(n - k + 1);
    int pn = -1; // window size is 3 and pn is index for neg element.

    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            pn = i;
            break;
        }
    }
    if (pn == -1)
        ans[0] = 1;
    else
        ans[0] = arr[pn];
    // sliding window.
    int i = 1;
    int j = k;
    while (j < n)
    {
        if (pn >= i)
        {                    // pn contained in current window. And if pn is first neagtive of prev window then it will be definetly first negative of current window.
            ans[i] = arr[pn];
        }
        else
        {                       // pn not contained in current window as it lies in previous window.
            pn = -1;
            for (int x = i; x <= j; x++)
            {                       // loop over current window to find first neg element.
                if (arr[x] < 0)
                {
                    pn = x;
                    break;
                }
            }
            if (pn != -1)
                ans[i] = arr[pn];
            else
                ans[i] = 1;                  // no negative element found in that window.
        }
        i++;
        j++;
    }

    // now ans array is filled with first negative eleemnt of each window.
    for (int ele : ans)
    {
        cout << ele << " ";
    }
}
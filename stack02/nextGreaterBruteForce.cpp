#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int arr[] = {3, 1, 2, 7, 4, 6, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // next greater of all elements arr brute force .
    int nge[n];
    for (int i = 0; i < n; i++)
    {
        nge[i] = -1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                nge[i] = arr[j];
                break;
            }
        }
    }
    // print next greater element array.
    for (int i = 0; i < n; i++)
    {
        cout << nge[i] << " ";
    }
    cout << endl;

    // return type is array
    //  int* functionName() {
    //  static int arr[10]; // Static to ensure the array persists after the function ends
    //  // Initialize or modify the array as needed
    //  return arr;
    //  }
}

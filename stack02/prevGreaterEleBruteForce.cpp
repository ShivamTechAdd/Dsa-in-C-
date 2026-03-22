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

    stack<int> st;
    int pge[n];

    pge[0] = -1;
    st.push(arr[0]);

    for (int i = 1; i < n; i++)
    {
        // pop all the elements smaller than or equal to arr[i]
        while (st.size()!=0 && st.top() <= arr[i])
            st.pop();

        // assign the next greater element
        if (st.size()==0)
            pge[i] = -1;
        else
            pge[i] = st.top();

        // push current element to stack
        st.push(arr[i]);
    }

    // print the next greater element array
    for (int i = 0; i < n; i++)
    {
        cout << pge[i] << " ";
    }
    cout << endl;

    return 0;
}
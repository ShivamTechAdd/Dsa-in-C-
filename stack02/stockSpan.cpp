#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int arr[] = {100,80,60,81,70,60,75,85};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";    
    }
    cout << endl;

    stack<int> st;
    int pgi[n];
    int span[n];
    pgi[0] = 1;  //previous greater index
    st.push(0);

    for (int i = 1; i < n; i++)
    {
        // pop all the elements smaller than or equal to arr[i]
        while (st.size()!=0 && arr[st.top()] <= arr[i])
            st.pop();

        // assign the next greater element
        if (st.size()==0)
            pgi[i] = -1;
        else
            pgi[i] = st.top();
        //span array elements
            pgi[i]=i-pgi[i];

        // push current element to stack
        st.push(i);
    }


//span finding.
    // for (int i = 0; i < n; i++)
    // {
    //     span[i]=i-pgi[i];
    // }
    //OR
    // for (int i = 0; i < n; i++)
    // {
    //     pgi[i]=i-pgi[i];
    // }


    // print the span  array
    for (int i = 0; i < n; i++)
    {
        cout << pgi[i] << " ";
    }
    cout << endl;


      // print the span array
    //    for (int i = 0; i < n; i++)
    //    {
    //        cout << span[i] << " ";
    //    }
    //    cout << endl;

    return 0;
}
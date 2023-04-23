#include <bits/stdc++.h>
using namespace std;

vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    int i = 0, j = 0, k = 0;

    vector<int> res;
    int last = INT_MIN;
    while (i < n1 and j < n2 and k < n3)
    {
        if (A[i] == B[j] and A[i] == C[k] and A[i] != last)
        {
            res.push_back(A[i]);
            last = A[i]; // last variable is maintained in order to deal with duplicates in all 3 arrray, if element 4 comes in all arrays, if again 4 comes , so to not count this again 4, we us last variable
            i++;
            j++;
            k++;
        }
        else if (min({A[i], B[j], C[k]}) == A[i])
            i++;
        else if (min({A[i], B[j], C[k]}) == B[j])
            j++;
        else
            k++;
    }
    return res;
}

int main()
{
    int n1, n2, n3;
    cout << "Enter the  size of the array 1:";
    cin >> n1;
    cout << "Enter the  size of the array 2:";
    cin >> n2;
    cout << "Enter the  size of the array 3:";
    cin >> n3;
    int a[n1];
    int b[n2];
    int c[n3];
    cout << "Enter the elements of the array 1:";
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the elements of the array 2:";
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }

    cout << "Enter the elements of the array 3:";
    for (int i = 0; i < n3; i++)
    {
        cin >> c[i];
    }

    vector<int> ans = commonElements(a, b, c, n1, n2, n3);
    cout << "Common elements are:";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
}
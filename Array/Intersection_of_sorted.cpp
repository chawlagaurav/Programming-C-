#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the size of first array:";
    cin >> n;
    cout << "Enter the size of second array:";
    cin >> m;
    int arr[n];
    int brr[m];
    cout << "Enter the elements of first array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the elements of second array:";
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }
    unordered_set<int> s(arr, arr + n);
    int res = 0;
    for (int i = 0; i < m; i++)
    {
        if (s.find(brr[i]) != s.end())
        {
            res++;
            s.erase(brr[i]);
        }
    }
    cout << "Intersection is :" << res;
}
#include <bits/stdc++.h>
using namespace std;
int consecutive(int arr[], int n)
{
    unordered_set<int> s;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (s.find(arr[i] - 1) == s.end())
        {
            int j = arr[i];
            while (s.find(j) != s.end())
            {
                j++;
            }
            ans = max(ans, j - arr[i]);
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the size of the array:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Longest consecutive subsequence from here would be : " << consecutive(arr, n);
}
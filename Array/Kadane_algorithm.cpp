#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the aray:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxsum = arr[0];
    int ans = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxsum = max(arr[i], maxsum + arr[i]);
        ans = max(maxsum, ans);
    }
    cout << "Maximum sum of a sub array is:" << ans;
}
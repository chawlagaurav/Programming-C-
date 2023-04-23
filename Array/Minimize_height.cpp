#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cout << "Enter the size of the array:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the value of k:";
    cin >> k;
    sort(arr, arr + n);
    int ans = arr[n - 1] - arr[0];

    int smallest = arr[0] + k;
    int largest = arr[n - 1] - k;
    int mi, ma;

    for (int i = 0; i < n; i++)
    {
        mi = min(smallest, arr[i + 1] - k);
        ma = max(largest, arr[i] + k);
        if (mi < 0)
        {
            continue;
        }
        ans = min(ans, ma - mi);
    }

    cout << "Minimizing the difference using k , we can achieve minimum difference as :" << ans;
}
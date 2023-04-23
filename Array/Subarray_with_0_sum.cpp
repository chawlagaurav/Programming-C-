#include <bits/stdc++.h>
using namespace std;
bool zerosum(int arr[], int n)
{
    int prefix_sum = 0;
    unordered_map<int, bool> submap;
    for (int i = 0; i < n; i++)
    {
        prefix_sum += arr[i];

        if ((prefix_sum == 0) || (submap[prefix_sum] == true))
        {
            return true;
        }
        submap[prefix_sum] = true;
    }
    return false;
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
    bool flag = zerosum(arr, n);
    if (flag)
    {
        cout << "It contains a subarray with zero sum";
    }
    else
    {
        cout << "It donot contain a subarray with zero sum";
    }
}
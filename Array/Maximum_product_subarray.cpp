#include <bits/stdc++.h>
using namespace std;
int maximum_product_subarray(int arr[], int n)
{
    int maxi, mini;
    maxi = mini = 1;
    int overall_max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            maxi = max(mini * arr[i], 1);
            mini = maxi * arr[i];
        }
        else if (arr[i] > 0)
        {
            maxi = arr[i] * maxi;
            mini = min(arr[i] * mini, 1);
        }
        else
        {
            maxi = mini = 1;
        }
        overall_max = max(overall_max, maxi);
    }
    return overall_max;
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
    int ans = maximum_product_subarray(arr, n);
    cout << "Maximum product by a subarray is:" << ans;
}
#include <bits/stdc++.h>
using namespace std;
int pairs_sum(int arr[], int n, int k)
{
    int twice_count = 0;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

    for (int j = 0; j < n; j++)
    {
        twice_count += m[k - arr[j]];

        if (k - arr[j] == arr[j])
        {
            twice_count--;
        }
    }
    return twice_count / 2;
}
int main()
{
    int n, k;
    cout << "Enter the  size of the array:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the sum to find";
    cin >> k;
    cout << "Number of pairs with this sume is:" << pairs_sum(arr, n, k);
}
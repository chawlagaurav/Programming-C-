#include <bits/stdc++.h>
using namespace std;
void more_than(int arr[], int n, int value)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

    for (auto x : m)
    {
        if (x.second > value)
        {
            cout << x.first << " ";
        }
    }
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
    int k;
    cout << "Enter the value of k:";
    cin >> k;
    int value = n / k;

    more_than(arr, n, value);
}
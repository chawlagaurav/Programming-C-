#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int low, int high)
{
    while (low <= high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
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
    int k, m;
    for (k = n - 2; k >= 0; k--)
    {
        if (arr[k] < arr[k + 1])
        {
            break;
        }
    }
    if (k < 0)
    {
        reverse(arr, 0, n - 1);
    }
    else
    {

        for (m = n - 1; m > k; m--)
        {
            if (arr[m] > arr[k])
            {

                break;
            }
        }
        swap(arr[m], arr[k]);
        reverse(arr, k + 1, n - 1);
    }
}
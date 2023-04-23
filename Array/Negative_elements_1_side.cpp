#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of the array:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int low = 0, high = n - 1;
    while (low < high)
    {
        if (arr[low] < 0 && arr[high] < 0)
        {
            low++;
        }
        else if (arr[low] > 0 && arr[high] < 0)
        {
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
        else if (arr[low] > 0 && arr[high] > 0)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    cout << "Sorted elements of the array:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
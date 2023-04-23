#include <bits/stdc++.h>
using namespace std;
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
    int a = 0, b = 0, c = n - 1;

    while (b <= c)
    {
        if (arr[b] == 0)
        {
            swap(arr[a], arr[b]);
            a++;
            b++;
        }
        else if (arr[b] == 2)
        {
            swap(arr[b], arr[c]);
            c--;
        }
        else
        {
            b++;
        }
    }

    cout << "Sorted array is:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
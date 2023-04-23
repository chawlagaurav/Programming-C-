#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the size of first array:";
    cin >> n;
    cout << "Enter the size of first array:";
    cin >> m;
    int arr[n];
    int brr[m];

    cout << "Enter the elements of array 1 in sorted format:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the elements of array 2 in sorted format:";
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }

    int j = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > brr[0])
        {
            int temp = arr[i];
            arr[i] = brr[0];
            brr[0] = temp;
        }

        int first = brr[0];
        for (j = 1; j < m && brr[j] < first; j++)
        {
            brr[j - 1] = brr[j];
        }
        brr[j - 1] = first;
    }
}
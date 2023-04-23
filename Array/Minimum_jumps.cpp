#include <bits/stdc++.h>
using namespace std;

int min_jumps(int arr[], int n)
{
    int jumps = 1;
    int maxreach = arr[0];
    int steps = arr[0];

    if (n <= 1)
    {
        return -1;
    }

    if (arr[0] = 0)
    {
        return -1;
    }

    for (int i = 1; i < n; i++)
    {
        if (i == n - 1)
        {
            return jumps;
        }

        maxreach = max(maxreach, i + arr[i]);
        13
            // 1 3 5 8 9- 2 6 7 6 8 9
            steps--;

        if (steps == 0)
        {
            jumps++;

            if (maxreach <= i)
            {
                return -1;
            }

            steps = maxreach - i;
        }
    }
    return jumps;
}
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

    cout << "Minimum number of jumps required is :" << min_jumps(arr, n);
}
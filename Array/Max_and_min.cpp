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
    int maxele = INT_MIN;
    int minele = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        maxele = max(maxele, arr[i]);
        minele = min(minele, arr[i]);
    }
    cout << "Maximum element is:" << maxele << " , Minimum element is :" << minele;
}
#include <bits/stdc++.h>
using namespace std;
int merge(int arr[], int temp[], int left, int mid, int right)
{
    int i = left;
    int j = mid;
    int k = left;
    int ic = 0;
    while ((i <= mid - 1) && (j <= right))
    {
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            ic = ic + (mid - i);
        }
    }
    while (i <= mid - 1)
    {
        temp[k++] = arr[i++];
    }
    while (j <= right)
    {
        temp[k++] = arr[j++];
    }
    for (int t = left; t <= right; t++)
    {
        arr[t] = temp[t];
    }

    return ic;
}
int merge_sort(int arr[], int temp[], int left, int right)
{
    int mid, ic = 0;
    if (right > left)
    {

        ic = ic + merge_sort(arr, temp, left, mid);
        ic = ic + merge_sort(arr, temp, mid + 1, right);

        ic = ic + merge(arr, temp, left, mid + 1, right);
    }
    return ic;
}
int inv(int arr[], int n)
{
    int *temp = (int *)malloc(sizeof(int) * n);
    return merge_sort(arr, temp, 0, n - 1);
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
    cout << "Inversions for this array would be:" << inv(arr, n);
}
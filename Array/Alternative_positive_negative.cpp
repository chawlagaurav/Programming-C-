#include <bits/stdc++.h>
using namespace std;
void rotatearray(int arr[], int n, int outofplace, int cur)
{
    char tmp = arr[cur];
    for (int i = cur; i > outofplace; i--)
        arr[i] = arr[i - 1];
    arr[outofplace] = tmp;
}

void rearrange(int arr[], int n)
{
    int wrong = -1;

    for (int i = 0; i < n; i++)
    {
        if (wrong >= 0)
        {
            if ((arr[i] >= 0 && arr[wrong] < 0) || (arr[i] < 0 && arr[wrong] >= 0))
            {
                rotatearray(arr, n, wrong, i);

                if (i - wrong >= 2)
                {
                    wrong += 2; // because if there are two elements or more between next -ve or +ve element, then there must be a wrong index between them
                }
                else
                {
                    wrong = -1;
                }
            }
        }
        if (wrong == -1)
        {
            if ((arr[i] >= 0 && i % 2 == 0) || (arr[i] < 0 && (i % 2) != 0))
            {
                wrong = i;
            }
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
    rearrange(arr, n);
}
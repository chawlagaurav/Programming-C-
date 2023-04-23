#include <bits/stdc++.h>
using namespace std;
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
    sort(arr, arr + n);
    cout << "Enter the kth number:";
    cin >> k;
    cout << "Kth largest element is :" << arr[n - k];
}

/*
          ******************Min Heap Solution*******************
          In this solution we put all elements in min heap and
          keep count of a counter i and print the element when
          i = k. Because in min heap, shortest element pops out
          first.

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
               cin>>k;
               priority_queue<int,vector<int>,greater<int>>p;
               for (int i = 0; i < n; i++)
               {
                   p.push(arr[i]);
               }
               int i=1;
               while(i!=k)
               {
                p.pop();
                i++;
               }
              cout<<p.top();

            }





*/
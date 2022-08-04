#include <bits/stdc++.h>
using namespace std;

int klargest(int arr[], int n, int k)
{
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    auto it = s.end();
    for (int i = 0; i < k - 1; i++)
    {
        it++;
    }
    return *it;
}

int ksmall(int arr[], int n, int k)
{
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    auto it = s.begin();
    for (int i = 0; i < k - 1; i++)
    {
        it++;
    }
    return *it;
}


int main()
{
    int arr[] = {5, 6, 9, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]), k = 2;
    cout << "Kth Smallest :- " << ksmall(arr, n, k) << endl;
    cout << "Kth Largest  :- " << klargest(arr, n, k)<<endl;
    return 0;
}
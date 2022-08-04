#include "bits/stdc++.h"

using namespace std;

// template <typename T>
// T mymax(T x, T y)
// {
//     return (x > y) ? x : y;
// }

// int main()
// {
//     cout << mymax<int>(2, 5) << endl;
//     cout << mymax<float>(12.00, 15.15) << endl;

//     return 0;
// }


// write a programm in cpp to find kth smallest of the largest element in an array using template and cpp stl

template <typename T>
T mysort(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{
    cout<<"Enter the size of araay : ";
    int size;
    int arr[size]p;
    cin>>size;
    for(int i = 0; i<size; i++){
        cout<<"arr["<<i<<"] : ";
        cin>>arr[i];

    }


    cout << mymax<int>(2, 5) << endl;
    cout << mymax<float>(12.00, 15.15) << endl;

    return 0;
}
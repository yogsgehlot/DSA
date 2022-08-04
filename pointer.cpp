#include "bits/stdc++.h"

using namespace std;

class avg{
    public:
    int a;
    int b;
    avg(int a, int b){
        this->a = a;
        this->b = b;

    }
    void findavg(){
        
    }
};

int main()
{

    int num;
    cin>>num;
    int *p;
    p = new int[num];
    for (int i = 0; i < num; i++)
    {
        cin >> p[i];
    }

    for (int i = 0; i < num; i++)
    {
        cout << p[i] << " ";
    }
}
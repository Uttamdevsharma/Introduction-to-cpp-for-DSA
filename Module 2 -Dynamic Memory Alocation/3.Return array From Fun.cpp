#include<bits/stdc++.h>
using namespace std;

int * Fun(){

    //int a[5]; //eta diye main Fun e output pabo na
    int *a =new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    return a;
    
}

int main(){

    int * x = Fun();
    for (int i = 0; i < 5; i++)
    {
       cout << x[i];
    }
    return 0;

}
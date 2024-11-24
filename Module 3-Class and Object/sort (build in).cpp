#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
       cin >> a[i];
    }

   // sort(a,a+n,greater<int>()); //descending       ascendin= sor(a,a+n)
   sort(a+2,a+n);  //index 2 theke index 4 short just
    for (int i = 0; i < n; i++)
    {
       cout << a[i];
    }   
}
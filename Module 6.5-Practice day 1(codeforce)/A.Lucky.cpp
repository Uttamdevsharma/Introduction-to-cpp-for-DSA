#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        string s;
        cin >> s;

        int res1=(s[0]-'0')+(s[1]-'0')+(s[2]-'0');
        int res2=(s[3]-'0')+(s[4]-'0')+(s[5]-'0');

        if(res1==res2){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }


}
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    string s;
    cin >> s;

    int awin=0,dwin=0;

    for (int i = 0; i < n; i++)
    {
        if(s[i]=='A'){
            awin++;
        }else if(s[i] == 'D'){
            dwin++;
        }
    }

    if(awin > dwin){
        cout << "Anton";
    }else if(awin<dwin){
        cout << "Danik";
    }else if(awin == dwin){
        cout << "Friendship";
    }
    
}
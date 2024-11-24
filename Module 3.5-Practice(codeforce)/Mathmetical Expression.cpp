#include<bits/stdc++.h>
using namespace std;


int main(){
    int a,b,c;
    char s,e;
    cin >> a >> s >> b >> e >> c;

    int res;

    if(s == '+'){
        res=a+b;
    }else if(s == '-'){
        res=a-b;
    }else if(s == '*'){
        res=a*b;
    }

    if(res==c){
        cout << "Yes";
    } else{
        cout << res;
    }
}
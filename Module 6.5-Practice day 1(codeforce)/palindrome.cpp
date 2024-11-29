#include<bits/stdc++.h>
using namespace std;

int main(){

   string s,c;
   cin >> s;
   c=s;

   reverse(s.begin(),s.end());

   if(s == c){
    cout << "YES";
   }else{
    cout << "NO";
   }
    
    
}
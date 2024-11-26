#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    if(!s.empty() && s.size()>=5){
   for (int i = 0; i <=s.size()-5; i++)
   {
    if(s.substr(i,5)=="EGYPT"){
        s.replace(i,5," ");
    }
   }
}

   cout << s << endl;
   
    
}
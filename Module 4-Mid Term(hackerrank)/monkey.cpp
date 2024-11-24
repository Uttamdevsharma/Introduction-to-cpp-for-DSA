#include<bits/stdc++.h>
using namespace std;

int main(){

    string line;

    while(getline(cin,line)){

        string temp="";

        for (int i = 0; i < line.length(); i++)
        {
            if(line[i] != ' '){
                temp+=line[i];
            }
        }

        sort(temp.begin(),temp.end());

        cout << temp <<endl;

        
    }
}
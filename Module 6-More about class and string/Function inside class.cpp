#include<bits/stdc++.h>
using namespace std;


class Cricketer{
    public:
    string name;
    int joursey;
    int match1;
    int match2;

    Cricketer(string name,int joursey,int match1,int match2 ){
        this->name=name;
        this->joursey=joursey;
        this->match1=match1;
        this->match2=match2;

    }


    void hello(){
        cout << "The run From " << name << "=" << match1+match2 << endl;
    }
};

int main(){

    Cricketer sakib("sakib",46, 56, 100);
    sakib.hello();

    
}
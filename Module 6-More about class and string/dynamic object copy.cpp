#include<bits/stdc++.h>
using namespace std;


class Cricketer{

    public:
    string country;
    int joursey;

    Cricketer(string country,int joursey){
        this->country=country;
        this->joursey=joursey;

    }
};

int main(){

    Cricketer* sakib=new Cricketer("Bangladesh",75);
    Cricketer* kohli=new Cricketer("India",18);

    *kohli=*sakib;
    delete sakib;

    cout << kohli->country << " " << kohli->joursey;


}
#include<bits/stdc++.h>
using namespace std;

 int* p;
 /*
//f
//static 
int  fun(){

    int x=10;
    p=&x;
    cout << *p <<endl;
    return;
}

int main(){

    fun();
    cout << *p <<endl;
    return 0;

} */
void Fun(){

    int* x=new int;
    *x=10;
    p=x;
    cout << *p << endl;
    return;
}

int main(){

    Fun();
   cout << *p <<endl;
    return 0;

}

    


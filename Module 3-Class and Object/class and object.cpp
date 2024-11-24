#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    char name[100];
    int roll;
    double gpa;
};

int main(){
    Student a;
    a.roll=34;
    a.gpa=4.65;
    char temp[100]="Uttam";
    strcpy(a.name,temp);
    cout<<a.name << " " << a.roll << " " << a.gpa;

    
}
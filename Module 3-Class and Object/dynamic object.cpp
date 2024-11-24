#include<bits/stdc++.h>
using namespace std;

class Student 
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll,int cls,double gpa){
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
    }
};

 Student* Fun(){

    Student * uttam = new Student(25,5,4.50);
    return uttam;

   }

int main(){
    Student *p = Fun();
    cout << p->roll << " " << p->cls << " " << p->gpa;   
}
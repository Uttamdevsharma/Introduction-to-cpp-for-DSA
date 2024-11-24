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

int main(){
    Student karim(23,5,2.10);
    cout<< karim.roll <<  " " << karim .cls << " " << karim.gpa;

    

    
}
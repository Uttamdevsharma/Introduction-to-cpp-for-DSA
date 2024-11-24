#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int studentID;
    string studentName;
    char section;
    int marks;

    Student() {
        studentID = 0;
        studentName = "";
        section = ' ';
        marks = 0;
    }

    Student(int id, string name, char sec, int totalMarks) {
        studentID = id;
        studentName = name;
        section = sec;
        marks = totalMarks;
    }
};

Student findTopStudent(Student students[]) {
    Student bestStudent = students[0];

    for (int i = 1; i < 3; i++) {
        if (students[i].marks > bestStudent.marks) {
            bestStudent = students[i];
        }
        else if (students[i].marks == bestStudent.marks) {
            if (students[i].studentID < bestStudent.studentID) {
                bestStudent = students[i];
            }
        }
    }
    return bestStudent;
}

int main() {
    int testCases;
    cin >> testCases;
    cin.ignore();

    while (testCases--) {
        Student students[3];

        for (int i = 0; i < 3; i++) {
            int id;
            string name;
            char section;
            int totalMarks;

            cin >> id >> name >> section >> totalMarks;

            students[i] = Student(id, name, section, totalMarks);
        }

        Student top = findTopStudent(students);

        cout << top.studentID << " " << top.studentName << " " << top.section << " " << top.marks << endl;
    }

    return 0;
}

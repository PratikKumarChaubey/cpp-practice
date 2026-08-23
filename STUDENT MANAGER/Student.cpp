#include"Student.h"
#include<iostream>
using namespace std;

Student::Student(){
    sid=0;
    sage=0;
    sSemester=0;
    sName="";
    sBranch="";
    sMarks=0;
}
// 2. Parameterized Constructor
Student::Student(int id, string name, int age, string branch, int semester, double marks) {
    sid = id;
    sName = name;
    sage = age;
    sBranch = branch;
    sSemester = semester;
    sMarks = marks;
}
// 3.Getter Func
int Student::getId()const{
    return sid;
}
string Student::getName()const{
    return sName;
}
int Student::getAge()const{
    return sage;
}
string Student:: getBranch()const{
    return sBranch;
}
int Student::getSemester()const{
    return sSemester;
}
double Student::getMarks()const{
    return sMarks;
}

// 4. Setter Func

void Student::setName(const string &a){
    sName=a;
}
void Student::setId(int a){
    sid=a;
}
void Student::setAge(int a){
    sage=a;
}
void Student::setBranch(const string &a){
    sBranch=a;
}
void Student::setSemester(int a){
    sSemester=a;
}
void Student::setMarks(double a){
    sMarks=a;
}

void Student::display() const {
    cout << "--------------------------------------" << endl;
    cout << "ID: " << sid << " | Name: " << sName << " | Age: " << sage << endl;
    cout << "Branch: " << sBranch << " | Semester: " << sSemester << " | Marks: " << sMarks << endl;
    cout << "--------------------------------------" << endl;
}

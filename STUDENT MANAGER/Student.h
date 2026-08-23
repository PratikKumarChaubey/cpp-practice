#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;
class Student {
private:
    int sid;
    int sage;
    int sSemester;
    string sName;
    string sBranch;
    double sMarks;

public:
    // Constructors
    Student();
    Student(int id, string name, int age, string branch, int semester, double marks);

    // Getters
    int getId() const;
    string getName() const;
    int getAge() const;
    string getBranch() const;
    int getSemester() const;
    double getMarks() const;

    // Setters
    void setName(const string& name);
    void setId(int id);
    void setAge(int age);
    void setBranch(const string& branch);
    void setSemester(int semester);
    void setMarks(double marks);

    // Display
    void display() const;
};

#endif

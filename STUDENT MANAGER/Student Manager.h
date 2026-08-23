#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H
#include<iostream>
#include<vector>
#include<string>
using namespace std;
#include "Student.h"

class StudentManager {
private:
    std::vector<Student> students;

public:
    // Core CRUD Methods
    void addStudent(const Student& s);
    void displayAll() const;
    Student* findStudentById(int id);
    void searchByName(const std::string& name) const;
    void filterByBranch(const std::string& branch) const;
    bool deleteStudentById(int id);
};

#endif

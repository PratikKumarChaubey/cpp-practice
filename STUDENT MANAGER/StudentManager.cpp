#include "Student Manager.h"
#include <iostream>

using namespace std;

// 1. Add Student (with duplicate ID prevention)
void StudentManager::addStudent(const Student& s) {
    if (findStudentById(s.getId()) != nullptr) {
        cout << "Error: Student with ID " << s.getId() << " already exists!\n";
        return;
    }
    students.push_back(s);
    cout << "Student added successfully!\n";
}

// 2. Display All Students
void StudentManager::displayAll() const {
    if (students.empty()) {
        cout << "No student records available.\n";
        return;
    }
    cout << "\n================ ALL STUDENT RECORDS ================\n";
    for (const auto& s : students) {
        s.display();
    }
}

// 3. Find Student by ID (Returns pointer to object or nullptr)
Student* StudentManager::findStudentById(int id) {
    for (auto& s : students) {
        if (s.getId() == id) {
            return &s;
        }
    }
    return nullptr;
}

// 4. Search by Name
void StudentManager::searchByName(const string& name) const {
    bool found = false;
    for (const auto& s : students) {
        if (s.getName() == name) {
            s.display();
            found = true;
        }
    }
    if (!found) {
        cout << "No student found with the name: " << name << "\n";
    }
}

// 5. Filter by Branch
void StudentManager::filterByBranch(const string& branch) const {
    bool found = false;
    cout << "\n--- Students in Branch: " << branch << " ---\n";
    for (const auto& s : students) {
        if (s.getBranch() == branch) {
            s.display();
            found = true;
        }
    }
    if (!found) {
        cout << "No students found in branch: " << branch << "\n";
    }
}

// 6. Delete Student by ID
bool StudentManager::deleteStudentById(int id) {
    for (auto it = students.begin(); it != students.end(); ++it) {
        if (it->getId() == id) {
            students.erase(it);
            return true;
        }
    }
    return false;
}
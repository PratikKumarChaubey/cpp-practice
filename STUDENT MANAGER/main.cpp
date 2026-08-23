#include <iostream>
#include <string>
#include "Student Manager.h"

using namespace std;

void showMenu() {
    cout << "\n========================================\n";
    cout << "       STUDENT MANAGEMENT SYSTEM        \n";
    cout << "========================================\n";
    cout << "1. Add New Student\n";
    cout << "2. Display All Students\n";
    cout << "3. Search Student by ID\n";
    cout << "4. Search Students by Name\n";
    cout << "5. Filter Students by Branch\n";
    cout << "6. Update Student Marks\n";
    cout << "7. Delete Student Record\n";
    cout << "8. Exit\n";
    cout << "========================================\n";
    cout << "Enter your choice (1-8): ";
}

int main() {
    StudentManager manager;
    int choice;

    do {
        showMenu();
        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input. Please enter a number between 1 and 8.\n";
            continue;
        }

        switch (choice) {
            case 1: {
                int id, age, semester;
                string name, branch;
                double marks;

                cout << "\nEnter ID: ";
                cin >> id;
                cin.ignore();
                cout << "Enter Name: ";
                getline(cin, name);
                cout << "Enter Age: ";
                cin >> age;
                cin.ignore();
                cout << "Enter Branch (e.g. CSE, ECE): ";
                getline(cin, branch);
                cout << "Enter Semester: ";
                cin >> semester;
                cout << "Enter Marks: ";
                cin >> marks;

                Student newStudent(id, name, age, branch, semester, marks);
                manager.addStudent(newStudent);
                break;
            }
            case 2:
                manager.displayAll();
                break;

            case 3: {
                int id;
                cout << "\nEnter ID to search: ";
                cin >> id;
                Student* s = manager.findStudentById(id);
                if (s != nullptr) {
                    cout << "\nStudent Record Found:\n";
                    s->display();
                } else {
                    cout << "No student found with ID " << id << ".\n";
                }
                break;
            }
            case 4: {
                string name;
                cin.ignore();
                cout << "\nEnter Name to search: ";
                getline(cin, name);
                manager.searchByName(name);
                break;
            }
            case 5: {
                string branch;
                cin.ignore();
                cout << "\nEnter Branch to filter: ";
                getline(cin, branch);
                manager.filterByBranch(branch);
                break;
            }
            case 6: {
                int id;
                cout << "\nEnter ID of student to update: ";
                cin >> id;
                Student* s = manager.findStudentById(id);
                if (s != nullptr) {
                    double newMarks;
                    cout << "Current Record:\n";
                    s->display();
                    cout << "Enter new marks: ";
                    cin >> newMarks;
                    s->setMarks(newMarks);
                    cout << "Marks updated successfully.\n";
                } else {
                    cout << "No student found with ID " << id << ".\n";
                }
                break;
            }
            case 7: {
                int id;
                cout << "\nEnter ID to delete: ";
                cin >> id;
                if (manager.deleteStudentById(id)) {
                    cout << "Student with ID " << id << " deleted successfully.\n";
                } else {
                    cout << "Student with ID " << id << " not found.\n";
                }
                break;
            }
            case 8:
                cout << "\nExiting Student Management System. Goodbye!\n";
                break;

            default:
                cout << "Invalid selection! Choose between 1 and 8.\n";
        }
    } while (choice != 8);

    return 0;
}
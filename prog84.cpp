#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    int age;
    float marks;

public:
    // Constructor
    Student(string n, int roll, int a, float m) : name(n), rollNumber(roll), age(a), marks(m) {}

    // Getter and Setter functions
    string getName() const { return name; }
    int getRollNumber() const { return rollNumber; }
    // ... other getters and setters ...

    void display() const {
        cout << "Roll No: " << rollNumber << "\tName: " << name << "\tAge: " << age << "\tMarks: " << marks << endl;
    }

    // Function to return data as a string for file saving
    string toFileString() const {
        return name + "," + to_string(rollNumber) + "," + to_string(age) + "," + to_string(marks);
    }
};

class StudentDatabase {
private:
    vector<Student> students;

public:
    void addStudent(const Student& s) {
        students.push_back(s);
    }

    void displayAllStudents() {
        for (const auto& student : students) {
            student.display();
        }
    }

    // Implement search, update, delete functions here...
    // Student* searchByRollNumber(int roll) { ... }

    void saveToFile(const string& filename) {
        ofstream file(filename);
        for (const auto& student : students) {
            file << student.toFileString() << endl;
        }
        file.close();
    }

    void loadFromFile(const string& filename) {
        ifstream file(filename);
        string line;
        // ... logic to parse each line and create Student objects ...
        file.close();
    }
};

// Menu-driven main function
int main() {
    StudentDatabase db;
    db.loadFromFile("students.txt"); // Load data at start

    int choice;
    do {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Save & Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string name;
                int roll, age;
                float marks;
                cout << "Enter Name, Roll Number, Age, Marks: ";
                cin >> name >> roll >> age >> marks;
                Student newStudent(name, roll, age, marks);
                db.addStudent(newStudent);
                break;
            }
            case 2:
                db.displayAllStudents();
                break;
            // ... other cases ...
            case 6:
                db.saveToFile("students.txt");
                cout << "Data saved. Exiting...\n";
                break;
            default:
                cout << "Invalid Choice!\n";
        }
    } while (choice != 6);

    return 0;
}
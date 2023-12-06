#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int ID;
    string name;
    char section;
    int totalMarks;
};


Student findHighestMarks(vector<Student>& students) {
    int maxMarks = -1;
    Student highestStudent;

    for (const auto& student : students) {
        if (student.totalMarks > maxMarks) {
            maxMarks = student.totalMarks;
            highestStudent = student;
        } else if (student.totalMarks == maxMarks && student.ID < highestStudent.ID) {
            highestStudent = student;
        }
    }

    return highestStudent;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        vector<Student> students;
        for (int j = 0; j < 3; ++j) {
            Student s;
            cin >> s.ID >> s.name >> s.section >> s.totalMarks;
            students.push_back(s);
        }

       
        Student highestStudent = findHighestMarks(students);

        
        cout << highestStudent.ID << " " << highestStudent.name << " " << highestStudent.section << " " << highestStudent.totalMarks << endl;
    }

    return 0;
}

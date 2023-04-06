#include <iostream>
#include "Student.h"


using namespace std;

int main() {


    cout<<"Enter name of a student and a list of courses, then the program will let you enter name of student2 then it will copy student1 content to student2, and it will reset student1 to show student2 won't be affected at all.(it will repeat the same process with student2 and student3)"<<endl;
    cout<<endl;
    Student student1;
    Student student2;
    Student student3;
    cout << "Please enter name for student 1" << endl;
    string name1;
    getline(cin, name1);
    student1.setName(name1);
    int counter = 0;
    while (true) {
        cout << "Please enter a course and (type exit when you done): #" << counter + 1 << endl;
        string course;
        getline(cin, course);
        if (course.empty()) {
            cerr << "Empty entry is not allowed!!!!!" << endl;
            continue;
        }
        if (course == "exit") {
            break;
        } else {
            student1.addCourse(course);
            counter++;
        }

    }


    student1.setNumCourse(counter);
    cout << student1 << endl;
    student1.print();

    cout << "=============================" << endl;

    student2 = student1;

    cout << "Please enter name for student 2" << endl;
    string name2;
    cin >> name2;
    student2.setName(name2);


    cout << student2 << endl;
    student2.print();

    student1.reset();

    cout << "After resetting the array and the num of courses for student1 object" << endl;

    cout << student1;
    student1.print();

    cout << "Resetting student1 won't affect student2 object" << endl;


    cout << student2 << endl;
    student2.print();


    cout << "=============================" << endl;

    student3 = student2;


    cout << "Enter name for student 3" << endl;
    string name3;
    cin >> name3;
    student3.setName(name3);


    cout << student3 << endl;
    student3.print();

    student2.reset();

    cout << "After resetting the array and the num of courses for student2 object" << endl;


    cout << student2 << endl;
    student2.print();

    cout << "Resetting student2 won't affect student3 object" << endl;


    cout << student3 << endl;
    student3.print();
    cout << "Test complete!!!" << endl;
    return 0;
}

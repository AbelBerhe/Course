//
// Created by abelg on 2022-11-01.
//

#ifndef COURSE_STUDENT_H
#define COURSE_STUDENT_H

#include <string>

using namespace std;


class Student {

private:
    string name; //name of the student.
    int numCourse;//number of course the student enrolled in.
    string *courseList;// list of course the student is enrolled in.

public:
    //default constructor.
    Student();

    //copy constructor
    Student(const Student &student);

    //default destructor.
    ~Student();

    Student operator=(const Student &student);

    void setName(string p_name);

    string getName();

    void setNumCourse(int);

    int getNumCourse();

    void addCourse(string &);

    void print();

    void reset();

    friend ostream &operator<<(ostream &output, Student &student);
};


#endif //COURSE_STUDENT_H

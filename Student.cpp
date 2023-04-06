//
// Created by abelg on 2022-11-01.
//

#include "Student.h"
#include <string>
#include <iostream>

int size = 3;
int counter = 0;

Student::Student() {
    cout << "default constructor was invoked" << endl;
    this->name = "";
    this->numCourse = 0;
    this->courseList = new string[size];
}//end of default constructor

//copy constructor
Student::Student(const Student &student) {
    cout << "copy constructor was invoked" << endl;
    this->name = student.name;
    this->numCourse = student.numCourse;
    this->courseList = new string[size];

    for (int i = 0; i < size; ++i) {
        this->courseList[i] = student.courseList[i];
    }
}//end of the copy constructor

//default constructor
Student::~Student() {
    cout << "destructor was invoked" << endl;
    delete[] courseList;
    courseList = nullptr;
}//default destructor

//overloaded assignment operator
Student Student::operator=(const Student &student) {
    cout << "assignment overloaded operator was invoked" << endl;
    this->name = student.name;
    this->numCourse = student.numCourse;
    this->courseList = new string[size];

    for (int i = 0; i < size; ++i) {
        this->courseList[i] = student.courseList[i];
    }
    return *this;
}


void Student::setName(string p_name) {
    name = p_name;
}


string Student::getName() {
    return name;
}


void Student::setNumCourse(int num) {
    numCourse = num;
}


int Student::getNumCourse() {
    return numCourse;
}

//adding course one by one to courseList
void Student::addCourse(string &course) {
    if (counter >= size) {
        size = size * 2;
        string *temp = new string[size];

        for (int i = 0; i < counter; i++) {
            temp[i] = this->courseList[i];
        }
        delete[] this->courseList;
        this->courseList = temp;
    }
    this->courseList[counter] = course;
    counter++;
}


void Student::print() {
    for (int i = 0; i < counter; ++i) {
        cout << courseList[i] << endl;
    }
}

void Student::reset() {
    setNumCourse(0);
    //courseList =NULL;
    for (int i = 0; i < size; ++i) {
        courseList[i].clear();
    }
}

ostream &operator<<(ostream &output, Student &student) {
    output << "Student name  :  " << student.name << endl;
    output << "Student number of courses  :  " << student.numCourse;
    return output;
}


















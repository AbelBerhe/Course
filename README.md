# Course

Programming Assignment Rubric
Course #: PROG 2100
Assignment #: 2 (“Courses”)

Create a class named Student that has three member variables:

Name:		- A string that stores the name of the student

numCourses:	- An integer that tracks how many courses the student is currently enrolled in

courseList	-A dynamically declared (on heap) array of strings (not a vector) used to store the names of classes that the student is enrolled in


Write appropriate constructors(s), mutator, and accessor functions for the class along with the following:

•	A default constructor
•	The “big three / rule of three” (i.e. copy constructor, assignment operator, destructor)
•	A set method that will receive a student’s name
•	An add function that will allow courses to be added to a student’s list of courses. This function will use a dynamically changing array so that it may support input for an arbitrary number of courses during the execution of the program.
•	A function that outputs the name and list of all courses.
•	A function that resets the number of courses to 0 and the courseList array to an empty list.

Write a driver program that tests/demonstrates the functionality of the Student class. The program should do the following:

•	Ask for the 1st students’ name and courses; looping until the student is finished. Note that you may not ask the student how many classes they intend to enter before they enter them nor may any entry be left blank.
•	Display the 1st student’s name, number of courses in their list and their list of courses.
•	Ask for the name of a second student and display this new student after copying the 1st student’s course information and writing in the new name.
•	Display the 1st student’s name, the number of courses in their list of courses after executing a function that resets the number of courses to 0 and the courseList array to an empty list 
•	Display the 2nd student’s name, number of courses in their list and their list of courses (to demonstrate that a deep copy took place).
•	Enter a third student and use the custom assignment operator  i.e. 3rd student = 2nd student 
•	Loop back to beginning
•	Have your solution output when each of the ‘big three’ methods fires (all three are required).

Other notes:
•	Ensure that the destructor does a not-null test and assigns null after delete
•	Ensure that the business logic and GUI are separate
•	Overload the << for output
•	Ensure that the driver you create demonstrates all the capabilities of the Student class (i.e. both the assignment and copy constructor)

NB: Citations - Remember that citations must be provided for any code, algorithm, text or image copied from another source (e.g. the Web, a textbook, an online tutorial, etc.).  Not attributing appropriately (plagiarism) or using illegally copied materials (copyright breach) are serious academic offenses. If you are in doubt as to when or how to cite, consult with your instructor and the resources provided by the college.

David Russell


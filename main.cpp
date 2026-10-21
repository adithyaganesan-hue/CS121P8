#include <iostream>
#include <fstream>
#include <vector>
#include "date.h"
#include "address.h"
#include "student.h"


void testAddress();
void testDate();
void testStudent();
void initializeStudents(std::vector<Student*> studentVector);

int main(){
  std::cout << "Hello!" << std::endl;
  std::vector<Student*> students;

  initializeStudents(students);

  bool keepGoing = true;
  while(keepGoing){
    std::cout << "0) quit" << std::endl;
    std::cout << "1) print all student names" << std::endl;
    std::cout << "2) print all student data" << std::endl;
    std::cout << "3) find a student" << std::endl;

    int input;
    std::cin >> input;

    switch (input){
        case 0:
            keepGoing = false;
            break;
        case 1:
            for(Student* student:students){
                std::cout << student->getLastFirst();
            }
            break;
        case 2:
            for(Student* student:students){
                student->printStudent();
            }
            break;
        case 3:
            std::cout << "last name of student: ";
            std::string lastName;
            std::cin >> lastName;

            for(Student* student:students){
                if(student->getLasName() == lastName){
                    student->printStudent();
                }
            }
            break;
    } //end switch
  } //end while

  for (Student* student : students) {
    delete student;
 }
 students.clear();
  return 0;
} // end main

void testAddress(){
  Address a;
  a.init("123 W Main St", "Muncie", "IN", "47303");
  a.printAddress();
} // end testAddress

void testDate(){
 Date d;
 d.init("01/27/1997");
 d.printDate();
} // end testDate

void testStudent(){
  std::string studentString = "Danielle,Johnson,32181 Johnson Course Apt. 389,New Jamesside,IN,59379,02/17/2004,05/15/2027,65";
  Student* student = new Student();
  student->init(studentString);
  student->printStudent();
  std::cout << std::endl;
  std::cout << student->getLastFirst();
  delete student;
} // end testStudent

void initializeStudents(std::vector<Student*> studentVector){
    std::ifstream inFile;
    inFile.open("students.csv");

    std::string currentLine;

    while(getline(inFile,currentLine)){
        Student* student = new Student();
        student->init(currentLine);
        studentVector.push_back(student);
    }
}
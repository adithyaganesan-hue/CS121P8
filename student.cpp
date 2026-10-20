#include <iostream>
#include <sstream>
#include <string>
#include "student.h"
#include "date.h"
#include "address.h"

Student::Student() {
    studentString = "";
    firstName = "";
    lastName = "";
    cHours = 0;
    bDay = nullptr;
    gradDay = nullptr;
    address = nullptr;
}

Student::~Student() {
    delete bDay;
    delete gradDay;
    delete address;
}

void Student::init(const std::string& str) {
    this->studentString = str;
    std::stringstream ss(str);

    std::string street, city, state, zip;
    std::string bDayStr, gradDayStr, creditsStr;

    std::getline(ss, firstName, ',');
    std::getline(ss, lastName, ',');
    std::getline(ss, street, ',');
    std::getline(ss, city, ',');
    std::getline(ss, state, ',');
    std::getline(ss, zip, ',');
    std::getline(ss, bDayStr, ',');
    std::getline(ss, gradDayStr, ',');
    std::getline(ss, creditsStr, ',');

    cHours = std::stoi(creditsStr);

    address = new Address();
    address->init(street, city, state, zip);

    bDay = new Date();
    bDay->init(bDayStr);

    gradDay = new Date();
    gradDay->init(gradDayStr);
}
void Student::printStudent() {
    std::cout << firstName << " " << lastName << std::endl;
    address->printAddress();
    
    std::cout << "DOB: "; 
    bDay->printDate(); 
    
    std::cout << "Grad: "; 
    gradDay->printDate();
    
    std::cout << "Credits: " << cHours << std::endl;
}

// Getters
std::string Student::getFirName() { 
    return firstName; 
}

std::string Student::getLasName() { 
    return lastName; 
}

int Student::getCrHours() { 
    return cHours; 
}

std::string Student::getLastFirst() {
    return lastName + ", " + firstName + "\n";
}
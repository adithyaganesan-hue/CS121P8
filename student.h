#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

class Date;
class Address;

class Student {
private:
    std::string studentString;
    std::string firstName;
    std::string lastName;
    int cHours;
    Date* bDay;
    Date* gradDay;
    Address* address;

public:
    Student();
    ~Student();

    void init(const std::string& studentString);
    void printStudent();

    std::string getFirName();
    std::string getLasName();
    int getCrHours();
    std::string getLastFirst();
};

#endif
#include <iostream>
#include <cstdlib>
#include <sstream>
#include "date.h"

Date::Date(){
	month = "January";
    day = "01";
    year = "0000";
}
void Date::init(std::string dateString){
    int monthInt = 0;

    const std::string monthNames[] = {
        "", "January", "February", "March", "April", "May", "June", 
        "July", "August", "September", "October", "November", "December"
    };

    Date::dateString = dateString;
	std::stringstream ss(dateString);
    
    std::string temp;
    std::getline(ss, temp, '/');
    monthInt = std::stoi(temp);
    month = monthNames[monthInt];

    std::getline(ss, day, '/');
    std::getline(ss, year);
}
void Date::printDate(){
    std::cout << month << " " << day << ", " << year << std::endl;
}




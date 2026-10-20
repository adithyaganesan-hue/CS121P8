#include <iostream>
#include <cstdlib>
#include <sstream>
#include "address.h"

Address::Address(){
	street = "street";
	city = "city";
	state = "state";
	zip = "zip";
}
void Address::init(std::string street, std::string city, std::string state, std::string zip){
	Address::street = street;
	Address::city = city;
	Address::state = state;
	Address::zip = zip;
}
std::string Address::getAddress(){
    std::stringstream ss;
    ss << street << std::endl << city << ", " << state << ", " << zip;
    return ss.str();
}
void Address::printAddress(){
	std::cout << getAddress() << std::endl;
}



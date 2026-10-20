#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS

class Address{
	private:
		std::string street;
		std::string city;
		std::string state;
		std::string zip;
	public:
		Address();
		void init(std::string street, std::string city, std::string state, std::string zip);
		std::string getAddress();
		void printAddress();
};
#endif


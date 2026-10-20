#ifndef DATE_H_EXISTS
#define DATE_H_EXISTS

class Date{
	private: 
		std::string dateString;
		std::string month;
		std::string day;
		std::string year;
	public:
		Date();
		void init(std::string dateString);
		void printDate();
};
#endif

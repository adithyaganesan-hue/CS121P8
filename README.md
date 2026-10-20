# CS121P7

Made by Adithya Ganesan

## UML

```mermaid
classDiagram
    class Date{
        -String dateString
        -int month
        -int day
        -int year
        +Date()
        +void init(String dateString)
        +void printDate()
    }
    class Address{
        -String street
        -String city
        -String state
        -String zip
        +Address()
        +void init(String street, String city, String state,String zip)
        +String getAddress()
        +String printAddress()
    }
    class Student{
        -String studentString
        -String firstName
        -String lastName
        -int cHours
        -Date* bDay
        -Date* gradDay
        -Address* address
        +Student()
        + ~Student()
        +void init(studentString)
        +void printStudent()
        +String getFirName()
        +String getLasName()
        +int getCrHours()
        +String getLastFirst()
    }
    Date --> Student
    Address --> Student
```
## Algorithm

### Address::Address()
    ```
    set street to "street"
    set city to "city"
    set state to "state"
    set zip to "zip"
    ```
### void Address::init(string street, string city, string state, string zip)
```
set Address::street = street
set Address::city = city
set Address::state = state
set Address::zip = zip
```
### String Address::getAddress()
```
create stringstream ss
add street to ss
add newline
add city, state, and zip to ss
return ss as a string
```
### void Address::printAddress()
```
print getAddress()
print newline
```
### Date::Date()
```
set month to "January"
set day to "01"
set year to "0000"
```
### Date::init(String dateString)
```
create array of month names

set Date::dateString = dateString
create stringstream ss from dateString

read month number from ss
convert month number to integer
set month to corresponding month name

read day from ss
read year from ss
```
### void Date::printDate()
```
print month, day, and year
print newline
```
### Student::Student()
```
set studentString to ""
set firstName to ""
set lastName to ""
set cHours to 0
create bDay pointer
create gradDay pointer
create address pointer
```
### Student::~Student()
```
delete bDay
delete gradDay
delete address
```
### Student::init(String str)
```
set studentString = str
create stringstream ss from str

read variables from ss

convert creditsStr to integer
set cHours to converted integer

create new Address
initialize address with street, city, state, and zip

create new Date for bDay
initialize bDay with bDayStr

create new Date for gradDay
initialize gradDay with gradDayStr
```
### void Student::printStudent()
```
print firstName and lastName
print address
print "DOB: "
print bDay
print "Grad: "
print gradDay
print "Credits: " and cHours
```
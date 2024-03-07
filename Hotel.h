#include <iostream>
using namespace std;

class Hotel;
class Customer;

ostream & operator<<(ostream & os, Customer &c);


istream & operator >>(istream & is ,  Customer & c);





//___________________Class Room_____________________//

class Room
{
 Customer *customer;
 int room_no;
 bool availabilty;
 static int r;
 string room_type;
 int price;
 string status;

 public:
 Room();
 void set_Room_Type(string);
 string get_Room_Type();
 void set_Availabilty(bool);
 bool get_Availabilty();
 void set_Price(int);
 int get_Price();
 void set_Status(string);
 string get_Status();
 int get_Room_No();
};

int Room::r=0;
//____________________________________________________//




//______________Derieved Classes from Room____________//

class room_standard:public Room
{
 public:
 room_standard()
 {
 Room();
 set_Room_Type("Standard");
 set_Availabilty(true);
 set_Price(300);
 set_Status("Available");
 }
};

//



//

class room_Moderate:public Room
{
 public:
 room_Moderate()
 {
 Room();
 set_Room_Type("Moderate");
 set_Availabilty(true);
 set_Price(500);
 set_Status("Available");
 }
};

///


//
class room_Superior:public Room
{
 public:
 room_Superior()
 {
 Room();
 set_Room_Type("Superior");
 set_Availabilty(true);
 set_Price(1000);
 set_Status("Available");
 }
};


///


//

class room_JuniorSuite:public Room
{
 public:
 room_JuniorSuite()
 {
 Room();
 set_Room_Type("JuniorSuite");
 set_Availabilty(true);
 set_Price(2000);
 set_Status("Available");
 }
};

///


//


class room_Suite:public Room
{
 public:
 room_Suite()
 {
 Room();
 set_Room_Type("Suite");
 set_Availabilty(true);
 set_Price(5000);
 set_Status("Available");
 }
};


 ///

 //____________________________________________//

 //_______________Class Date_____________//

 class Date
 {
 int day;
 int month;
 int year;
 public:
 Date();
 void setDay(int);
 void setMonth(int);
 void setYear(int);
 Date operator+(int);
 void DisplayDate();
 };

 //______________________________________//



 //______________class TIme ______________//

 class Time
 {
 int hrs;
 int mins;
 int secs;
 public:
 Time();
 void setHrs(int);
 void setMins(int);
 void setSecs(int);
 void DisplayTime();
 };

 //________________________________________//


//____________________class Floor____________//



class Floor
{

 int floor_no;
 static int f;
 Room *rooms[50];

 public:
 Floor();
 Room* getRoom(int);
 int getFloorNo();

};


int Floor::f=0;

//__________________________________________//


//_______________class Customer___________//

class Customer
{
 string name;
 int age;
 string gender;
 int ID_cardNo;
 int balance;
 int days_to_reserve;
 int fl_no;
 Floor *fl;
 Room* room;
 Hotel * hotel;
 string rm_type;
 int rm_number;
 Date check_in_date;
 Date check_out_date;
 Time check_in_time;
 Time check_out_time;

 public:
 Customer();
 void setName(string);
 string getName();
 void setAge(int);
 int getAge();
 void setGender(string);
 string getGender();
 void setID(int);
 int getID();
 void setBalance(int);
 int getBalance();
 void setReservedDays(int);
 int getReservedDays();
 void setDate_in(Date);
 Date getDate_in();
 void setDate_out();
 Date getDate_out();
 void setTime_in(Time);
 Time getTime_in();
 void setTime_out();
 Time getTime_out();
 void reserve_room();
 void check_in_room();
 Room* get_Room();
 };

//_______________________________//












//____________________class Hotel__________//


class Hotel
{

 Floor *floor[5];
 public:
 Hotel();
 Floor* getFloor(int);
};


//_______________________________________//

void Check_in(Customer);
void room_Check_in_Reserved(Customer);
void Check_in_time(Customer);
void Check_in_date(Customer);




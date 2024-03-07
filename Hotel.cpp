#include "Hotel.h"
//_____________Member functions_______________//





//____________Member functions of class Date__________//


 Date::Date()
 {
  day=0;
  month=0;
  year=0;
 }

 void Date::setDay(int d)
 {
  day=d;
 }

 void Date::setMonth(int m)
 {
  month=m;
 }

 void Date::setYear(int y)
 {
  year=y;
 }

 void Date::DisplayDate()
 {
  cout<<day<<"/"<<month<<"/"<<year<<endl;
 }

 Date Date::operator+(int r_days)
 {
  Date temp;
  temp.day=this->day+r_days;
  temp.month=this->month;
  temp.year=this->year;
  while(temp.day>31)
  {
   temp.month++;
   temp.day=temp.day-31;
  }
  while(temp.month>12)
  {
   temp.year++;
   temp.month=temp.month-12;
  }
  return temp;
  }



//__________________________//




//______________member functions of class TIme__________//



 Time::Time()
 {
  hrs=0;
  mins=0;
  secs=0;
 }

 void Time::setHrs(int hrs)
 {
  this->hrs=hrs;
 }

 void Time::setMins(int m)
 {
  mins=m;
 }

 void Time::setSecs(int s)
 {
  secs=s;
 }

 void Time::DisplayTime()
 {
  cout<<hrs<<":"<<mins<<":"<<secs<<endl;
 }

 //_______________________________________//



 //____________________member functions of class Customer_____________//



 Customer::Customer()
 {
  name="Name";
  age=0;
  gender="xxx";
  ID_cardNo=0;
  balance=0;
  days_to_reserve=0;
  hotel=new Hotel;
 }

 void Customer::setName(string n)
 {
  name=n;
 }

 string Customer::getName()
 {
  return name;
 }

 void Customer::setAge(int a)
 {
  age=a;
 }

 int Customer::getAge()
 {
  return age;
 }

 void Customer::setGender(string g)
 {
  gender=g;
 }

 string Customer::getGender()
 {
  return gender;
 }

 void Customer::setID(int id)
 {
  ID_cardNo=id;
 }

 int Customer::getID()
 {
  return ID_cardNo;
 }

 void Customer::setBalance(int b)
 {
  balance=b;
 }

 int Customer::getBalance()
 {
  return balance;
 }

 void Customer::setReservedDays(int d)
 {
  days_to_reserve=d;
 }

 int Customer::getReservedDays()
 {
  return days_to_reserve;
 }

 void Customer::setDate_in(Date d1)
 {
  check_in_date=d1;
 }

 Date Customer::getDate_in()
 {
  return check_in_date;
 }

 void Customer::setDate_out()
 {
  check_out_date=check_in_date+days_to_reserve;
 }

 Date Customer::getDate_out()
 {
  return check_out_date;
 }

 void Customer::setTime_in(Time t1)
 {
  check_in_time=t1;
 }

 Time Customer::getTime_in()
 {
  return check_in_time;
 }

 void Customer::setTime_out()
 {
  check_out_time=check_in_time;
 }

 Time Customer::getTime_out()
 {
  return check_out_time;
 }

 Room* Customer::get_Room()
 {
  return room;
 }

 void Customer::reserve_room()
 {
  cout<<"Enter the number of days to reserve a room"<<endl;
  cin>>days_to_reserve;
  cout<<"What type of room you want to reserve ?"<<endl;
  int ch;

  cout<<"1)Standard  ____  Price(300)"<<endl;
  cout<<"2)Moderate  ____  Price(500)"<<endl;
  cout<<"3)Superior  ____  Price(1000)"<<endl;
  cout<<"4)Junior Suite  _____  Price(2000)"<<endl;
  cout<<"5)Suite  _____  Price(5000)"<<endl;
  cin>>ch;
  switch(ch)
  {
   case 1 :
   {
    for(int i=0;i<5;i++)
    {
    for(int j=0;j<10;j++)
    {
     if(hotel->getFloor(i)->getRoom(j)->get_Availabilty())
     {
      room=hotel->getFloor(i)->getRoom(j);
      fl_no=hotel->getFloor(i)->getFloorNo();
      rm_type=hotel->getFloor(i)->getRoom(j)->get_Room_Type();
      rm_number=hotel->getFloor(i)->getRoom(j)->get_Room_No();
      hotel->getFloor(i)->getRoom(j)->set_Availabilty(false);
      hotel->getFloor(i)->getRoom(j)->set_Status("Reserved");
     }

     else
     {
      cout<<"Sorry! No Room is available of this type .Please select any other room type"<<endl;
     }
    }
   }

    break;
   }

   case 2 :
   {
    for(int i=0;i<5;i++)
    {
    for(int j=10;j<20;j++)
    {
     if(hotel->getFloor(i)->getRoom(j)->get_Availabilty())
     {
      room=hotel->getFloor(i)->getRoom(j);
      fl_no=hotel->getFloor(i)->getFloorNo();
      rm_type=hotel->getFloor(i)->getRoom(j)->get_Room_Type();
      rm_number=hotel->getFloor(i)->getRoom(j)->get_Room_No();
      hotel->getFloor(i)->getRoom(j)->set_Availabilty(false);
      hotel->getFloor(i)->getRoom(j)->set_Status("Reserved");
     }

     else
     {
      cout<<"Sorry! No Room is available of this type .Please select any other room type"<<endl;
     }
    }
   }
    break;
   }


   case 3 :
   {
    for(int i=0;i<5;i++)
    {
    for(int j=20;j<30;j++)
    {
      if(hotel->getFloor(i)->getRoom(j)->get_Availabilty())
     {
      room=hotel->getFloor(i)->getRoom(j);
      fl_no=hotel->getFloor(i)->getFloorNo();
      rm_type=hotel->getFloor(i)->getRoom(j)->get_Room_Type();
      rm_number=hotel->getFloor(i)->getRoom(j)->get_Room_No();
      hotel->getFloor(i)->getRoom(j)->set_Availabilty(false);
      hotel->getFloor(i)->getRoom(j)->set_Status("Reserved");
     }


     else
     {
      cout<<"Sorry! No Room is available of this type .Please select any other room type"<<endl;
     }
    }
   }
    break;
   }

   case 4 :
   {
    for(int i=0;i<5;i++)
    {
    for(int j=30;j<40;j++)
    {
     if(hotel->getFloor(i)->getRoom(j)->get_Availabilty())
     {
      room=hotel->getFloor(i)->getRoom(j);
      fl_no=hotel->getFloor(i)->getFloorNo();
      rm_type=hotel->getFloor(i)->getRoom(j)->get_Room_Type();
      rm_number=hotel->getFloor(i)->getRoom(j)->get_Room_No();
      hotel->getFloor(i)->getRoom(j)->set_Availabilty(false);
      hotel->getFloor(i)->getRoom(j)->set_Status("Reserved");
     }

     else
     {
      cout<<"Sorry! No Room is available of this type .Please select any other room type"<<endl;
     }
    }
   }
    break;
   }

   case 5 :
   {
    for(int i=0;i<5;i++)
    {
    for(int j=40;j<50;j++)
    {
     if(hotel->getFloor(i)->getRoom(j)->get_Availabilty())
     {
      room=hotel->getFloor(i)->getRoom(j);
      fl_no=hotel->getFloor(i)->getFloorNo();
      rm_type=hotel->getFloor(i)->getRoom(j)->get_Room_Type();
      rm_number=hotel->getFloor(i)->getRoom(j)->get_Room_No();
      hotel->getFloor(i)->getRoom(j)->set_Availabilty(false);
      hotel->getFloor(i)->getRoom(j)->set_Status("Reserved");
     }

     else
     {
      cout<<"Sorry! No Room is available of this type .Please select any other room type"<<endl;
     }
    }
   }
    break;
   }

   default :
   {
    cout<<"Invalid Choice"<<endl;
    cout<<"Which type of room do you want?"<<endl;
    cout<<"1)Standard"<<endl;
    cout<<"2)Moderate"<<endl;
    cout<<"3)Superior"<<endl;
    cout<<"4)Junior Suite"<<endl;
    cout<<"5)Suite"<<endl;
    cin>>ch;
    break;
   }
  }
 }

  void Customer::check_in_room()
  {
   cout<<"Enter the number of days you want to check in for :"<<endl;
  cin>>days_to_reserve;
  cout<<"What type of room you want ?"<<endl;
  int ch;

  cout<<"1)Standard  ____  Price(300)"<<endl;
  cout<<"2)Moderate  ____  Price(500)"<<endl;
  cout<<"3)Superior  ____  Price(1000)"<<endl;
  cout<<"4)Junior Suite  _____  Price(2000)"<<endl;
  cout<<"5)Suite  _____  Price(5000)"<<endl;
  cin>>ch;
  switch(ch)
  {
   case 1 :
   {
    for(int i=0;i<5;i++)
    {
    for(int j=0;j<10;j++)
    {
     if(hotel->getFloor(i)->getRoom(j)->get_Availabilty())
     {
      room=hotel->getFloor(i)->getRoom(j);
      fl_no=hotel->getFloor(i)->getFloorNo();
      rm_type=hotel->getFloor(i)->getRoom(j)->get_Room_Type();
      rm_number=hotel->getFloor(i)->getRoom(j)->get_Room_No();
      hotel->getFloor(i)->getRoom(j)->set_Availabilty(false);
      hotel->getFloor(i)->getRoom(j)->set_Status("Checked in");
     }

     else
     {
      cout<<"Sorry! No Room is available of this type .Please select any other room type"<<endl;
     }
    }
   }

    break;
   }

   case 2 :
   {
    for(int i=0;i<5;i++)
    {
    for(int j=10;j<20;j++)
    {
     if(hotel->getFloor(i)->getRoom(j)->get_Availabilty())
     {
      room=hotel->getFloor(i)->getRoom(j);
      fl_no=hotel->getFloor(i)->getFloorNo();
      rm_type=hotel->getFloor(i)->getRoom(j)->get_Room_Type();
      rm_number=hotel->getFloor(i)->getRoom(j)->get_Room_No();
      hotel->getFloor(i)->getRoom(j)->set_Availabilty(false);
      hotel->getFloor(i)->getRoom(j)->set_Status("Checked in");
     }


     else
     {
      cout<<"Sorry! No Room is available of this type .Please select any other room type"<<endl;
     }
    }
   }
    break;
   }


   case 3 :
   {
    for(int i=0;i<5;i++)
    {
    for(int j=20;j<30;j++)
    {
     if(hotel->getFloor(i)->getRoom(j)->get_Availabilty())
     {
      room=hotel->getFloor(i)->getRoom(j);
      fl_no=hotel->getFloor(i)->getFloorNo();
      rm_type=hotel->getFloor(i)->getRoom(j)->get_Room_Type();
      rm_number=hotel->getFloor(i)->getRoom(j)->get_Room_No();
      hotel->getFloor(i)->getRoom(j)->set_Availabilty(false);
      hotel->getFloor(i)->getRoom(j)->set_Status("Checked in");
     }

     else
     {
      cout<<"Sorry! No Room is available of this type .Please select any other room type"<<endl;
     }
    }
   }
    break;
   }

   case 4 :
   {
    for(int i=0;i<5;i++)
    {
    for(int j=30;j<40;j++)
    {
     if(hotel->getFloor(i)->getRoom(j)->get_Availabilty())
     {
      room=hotel->getFloor(i)->getRoom(j);
      fl_no=hotel->getFloor(i)->getFloorNo();
      rm_type=hotel->getFloor(i)->getRoom(j)->get_Room_Type();
      rm_number=hotel->getFloor(i)->getRoom(j)->get_Room_No();
      hotel->getFloor(i)->getRoom(j)->set_Availabilty(false);
      hotel->getFloor(i)->getRoom(j)->set_Status("Checked in");
     }

     else
     {
      cout<<"Sorry! No Room is available of this type .Please select any other room type"<<endl;
     }
    }
   }
    break;
   }

   case 5 :
   {
    for(int i=0;i<5;i++)
    {
    for(int j=40;j<50;j++)
    {
     if(hotel->getFloor(i)->getRoom(j)->get_Availabilty())
     {
      room=hotel->getFloor(i)->getRoom(j);
      fl_no=hotel->getFloor(i)->getFloorNo();
      rm_type=hotel->getFloor(i)->getRoom(j)->get_Room_Type();
      rm_number=hotel->getFloor(i)->getRoom(j)->get_Room_No();
      hotel->getFloor(i)->getRoom(j)->set_Availabilty(false);
      hotel->getFloor(i)->getRoom(j)->set_Status("Checked in");
     }

     else
     {
      cout<<"Sorry! No Room is available of this type .Please select any other room type"<<endl;
     }
    }
   }
    break;
   }

   default :
   {
    cout<<"Invalid Choice"<<endl;
    cout<<"Which type of room do you want?"<<endl;
    cout<<"1)Standard"<<endl;
    cout<<"2)Moderate"<<endl;
    cout<<"3)Superior"<<endl;
    cout<<"4)Junior Suite"<<endl;
    cout<<"5)Suite"<<endl;
    cin>>ch;
    break;
   }
  }

  int bal=0;
       bal=(get_Room()->get_Price())*(getReservedDays());
       setBalance(bal);
 }

 //____________________________________________//


 //_______Member functions of class Room____//


Room::Room()
{
 r++;
 room_no=r;
 customer=new Customer;
}

int Room::get_Room_No()
{
 return room_no;
}
void Room::set_Room_Type(string s)
{
 room_type=s;
}

string Room::get_Room_Type()
{
 return room_type;
}

void Room::set_Availabilty(bool a)
{
 availabilty=a;
}

bool Room::get_Availabilty()
{
 return availabilty;
}


void Room::set_Price(int p)
{
 price=p;
}

int Room::get_Price()
{
 return price;
}

void Room::set_Status(string st)
{
 status=st;
}

string Room::get_Status()
{
 return status;
}




//______________________________________//


//________Member functions of floor___________//

Floor::Floor()
{
 f++;
 floor_no=f;

 for(int i=0;i<10;i++)
 {
  rooms[i]= new room_standard;
 }

 for(int i=10;i<20;i++)
 {
  rooms[i]=new room_Moderate;
 }

 for( int i=20;i<30;i++)
 {
  rooms[i]= new room_Superior;
 }

 for( int i=30;i<40;i++)
 {
  rooms[i]=new room_JuniorSuite;
 }

 for( int i=40;i<50;i++)
 {
  rooms[i]=new room_Suite;
 }
}

Room * Floor::getRoom(int i)
{
 return rooms[i];
}

int Floor::getFloorNo()
{
 return floor_no;
}





//______________________________//



 //____________member functions of class hotel_____//


Hotel::Hotel()
{

 floor[0]=new Floor;
 floor[1]=new Floor;
 floor[2]=new Floor;
 floor[3]=new Floor;
 floor[4]=new Floor;
}

Floor * Hotel::getFloor(int i)
{
 return floor[i];
}
 //___________________________________//


 //______________Functions____________________//



//_____________________//

void Check_in_date(Customer c)
 	{
 	 Date d_in;

	  int day;
  	  int month;
	  int year;

  	  cout<<"Enter the date for checking in :"<<endl;
  	  cout<<"Day : ";
          cin>>day;
    	  while (day < 1 || day > 31)
      	  {
	   cout<<"Invalid Date" << endl;
           cout<<"Day : ";
           cin>>day;
      	  }

          d_in.setDay(day);
          cout<<endl;

          cout<<"Month : ";

          cout<<"1.January   2.Feburary   3.March     4.April" << endl;
          cout<<"        5.May        6.June       7.July      8.August" << endl;
    	  cout<<"        9.September  10.October   11.November 12.December" <<endl;
    	  cin>>month;

    	  if(month>12 ||month<1)
    	  {
	  	cout<<"Invalid Choice. Please enter a valid number  ";
	  	cin>>month;


      		}
    		cout<<endl;
	        d_in.setMonth(month);

    		cout<<"Year : ";
    		cin>>year;
    		cout<<endl;
    		while (year > 2999 || year < 2000)
      		{
		cout<<"Please Enter a valid year  ";
		cin>>year;
		cout<<endl;
      		}
  		d_in.setYear(year);

 		 c.setDate_in(d_in);

  	}

//___________________//



void Check_in_time(Customer c)
 	{
	 Time t_in;
	 int hrs, mins, secs;


	 cout<<"Enter time of Checking in "<<endl;
	 cout << "Hours : ";
    	cin >> hrs;
    	while (hrs <= 0 || hrs > 12)
      	{
	cout << "Invalid Hours. Enter Hours: ";
	cin >> hrs;

      	}
    	t_in.setHrs(hrs);
    	cout << "Minutes : ";
    	cin >> mins;
    	while (mins < 0 || mins >= 60)
      	{
	cout << "Invalid minutes. Enter Minutes: ";
	cin >> mins;
      	}
      	t_in.setMins(mins);
    	cout << "Seconds : ";
    	cin >> secs;
    	while (secs < 0 || secs >= 60)
      	{
	cout << "Invalid Seconds. Enter Seconds : ";
	cin >> secs;
      	}
    	t_in.setSecs(secs);


	c. setTime_in(t_in);

 	}



 //__________________//









 //__________//

 void room_Check_in_Reserved(Customer c)
 {
  char ch;
  cout<<"Have you reserved the Room?(y/n)"<<endl;
  cin>>ch;
  switch(ch)
  {
   case 'y' :
   {
    char choice;
    if(c.get_Room()->get_Status()=="Reserved")
    {
     cout<<"Have you paid the advance?(y/n)"<<endl;
     cin>>choice;
     switch(choice)
     {
      case 'y' :
      {
       c.setBalance(0);
       break;
      }

      case 'n' :
      {
       int bal=0;
       bal=(c.get_Room()->get_Price())*(c.getReservedDays());
       c.setBalance(bal);
       break;
      }

       default:
       {
   	cout<<"Invalid Choice "<<endl;
   	cout<<"Have you paid Advance :";
   	cout<<"Yes (y)"<<endl;
   	cout<<"No (n)"<<endl;
   	cin>>choice;
   	break;
  	}
       }

      Check_in_date(c);

      Check_in_time(c);

     }

     else
      {
        cout<<"Sorry The room is not reserved"<<endl;
      }
      }

      case 'n':
       {
     	 cout<<"Do you want to reserve a room?(Y/N)"<<endl;
     	 char p;
     	 cin>>p;
     	 if(p=='y')
     	 {
     	  cin>>p;
     	  c.reserve_room();
     	 }

     	 else if(p=='n')
     	 {
     	  cout<<"Okay,Thankyou for visiting"<<endl;
     	 }

     	 else
     	 {
     	  cout<<"Invalid Choice"<<endl;
     	 }
     	break;
     	}

     	default:
     	{
     	 cout<<"Invalid choice"<<endl;
     	 cin>>ch;
     	 break;
     	}
     }
    }

//___________//


//____________________//

void Check_in(Customer c)

{
 cin>>c;
 c.check_in_room();
 Check_in_date(c);
 Check_in_time(c);

}



istream & operator >>(istream & is ,  Customer & c)
{
 string n;
 int a;
 int g;
 string gen;
 int c_no;
 int bal;
 int daysTo_reserve;
 char choice;


 cout<<"Enter Name : ";
 is>>n;
 c.setName(n);

 cout<<"Enter Age : ";
 is>>a;
 c.setAge(a);

 cout<<"Select Gender : "<<endl;
 cout<<"1) Male "<<endl;
 cout<<"2) Female "<<endl;
 is>>g;
 switch (g)
 {
  case 1:
 {
  gen="Male";
  break;
 }

 case 2:
 {
  gen="Female";
  break;
 }

 default:
 {
  cout<<"Invalid Choice";
  cout<<"Select Gender : "<<endl;
  cout<<"1) Male "<<endl;
  cout<<"2) Female "<<endl;
  is>>g;
 }
}
 c.setGender(gen);

 cout<<"Enter ID card number ";
 is>>c_no;
 c.setID(c_no);

      return is;

 }


 //______________________//

     //______________________//

 ostream & operator<<(ostream & os, Customer &c)
 {

  os<<"Details of the Customer"<<endl;

  os<<"Name : ";
  os<<c.getName();
  os<<endl;
  os<<"Age : ";
  os<<c.getAge();
  os<<endl;
  os<<"Gender : ";
  os<<c.getGender();
  os<<endl;
  os<<"Id Card number : ";
  os<<c.getID();
  os<<endl;
  os<<"Balace : ";
  os<<c.getBalance();
  os<<endl;
  os<<"Number of Days Reserved : ";
  os<<c.getReservedDays();
  os<<endl;
  os<<"Date of Checking in : ";
  c.getDate_in().DisplayDate();
  os<<endl;
  os<<"Time of Checking in : ";
  c.getTime_in().DisplayTime();
  os<<endl;
  os<<"Date of Checking out : ";
  c.getDate_out().DisplayDate();
  os<<endl;
  os<<"Time of Checking out : ";
  c.getTime_out().DisplayTime();
  os<<endl;
  return os;
 }

  //_________________________//

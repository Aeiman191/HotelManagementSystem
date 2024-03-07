#include "Hotel.h"
#include "Hotel.cpp"

int main(int argc, char **argv) {



	      Hotel h1;
	      int ch;
	      Customer c;
	      cout<<"____________MainMenu___________"<<endl;
	      cout<<"1)Reserve a room "<<endl;
	      cout<<"2)Check in "<<endl;
	      cin>>ch;
	      switch(ch)
	      {
	       case 1 :
	       {

	        room_Check_in_Reserved( c);
	        break;
	       }

	       case 2 :
	       {

	        Check_in(c);
	        break;
	       }

	       default:
	       {
	       cout<<"Invalid"<<endl;
	       break;
	       }

	     }

	     cout<<c;
	     return 0;
	     }

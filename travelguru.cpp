#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<fstream>
#include<stdlib.h>
#include<unistd.h>
#include<iomanip>

using namespace std;

class Travel
{
	 float passenger_code;
	 char passenger_name[40];
	 int vehicle;
	 char destination[40];
	 int Total_price,price,discount_travel;
	 float distance;
	public:
	 int passenger_code_trip_search()
	 {
 		return passenger_code;
 	 }
	 Travel()
	 {
 		passenger_code=101;
 		strcpy(passenger_name,"Aditya");
 		Total_price=0;
 		price=0;
 		discount_travel=0;
 		distance=0;
 	 }
 	void calcluate_price(int ,float)
	 {
 	    if(vehicle==1)
		 {
 			if(distance<=500)
 			 price=5000;
 			else if((distance>500)&&(distance<=1000))
			 price=6000;
			else if((distance>1000)&&(distance<=1500))
			 price=8000;
			else if((distance>1500)&&(distance<=2000))
			 price=9000;
			else if(distance>2000)
			 price=12000; 	    
 		 }
		 else if(vehicle==2)
		 {
 			if(distance<=500)
 			 price=2500;
 			else if((distance>500)&&(distance<=1000))
			 price=4000;
			else if((distance>1000)&&(distance<=1500))
			 price=5000;
			else if((distance>1500)&&(distance<=2000))
			 price=6000;
			else if(distance>2000)
			 price=8000; 	    
 		 }
		 else if(vehicle==3)
		 {
 			if(distance<=500)
 			 price=2000;
 			else if((distance>500)&&(distance<=1000))
			 price=3500;
			else if((distance>1000)&&(distance<=1500))
			 price=5000;
			else if((distance>1500)&&(distance<=2000))
			 price=6000;
			else if(distance>2000)
			 price=7500; 	    
 		 }
		 else if(vehicle==4)
		 {
 			if(distance<=500)
 			 price=5500;
 			else if((distance>500)&&(distance<=1000))
			 price=7000;
			else if((distance>1000)&&(distance<=1500))
			 price=9000;
			else if((distance>1500)&&(distance<=2000))
			 price=10000;
			else if(distance>2000)
			 price=13000; 		    
 		 }
 		 discount(price);
	 }
	void discount(float)
	{
		if(price<=2000)
		 Total_price=price-0.05*price;
		
		else if((price>2000)&&(price<=6000))
		 Total_price=price-0.1*price;
		
		else if((price>6000)&&(price<=10000))
		 Total_price=price-0.15*price;
		 
		else if((price>10000)&&(price<=15000))
		 Total_price=price-0.2*price;    	
 	 } 
 	void Input_trip()
	 {
 		cout<<"Enter the Passenger Code: ";
 		cin>>passenger_code;
 		cout<<"Enter the Passenger's name: ";
 		cin>>passenger_name;
 		cout<<"Choose vehicle type: ";
	    cout<<"\nCAR-1\nBUS-2\nTRAIN-3\nPLANE-4\n";
	    cout<<"Enter the number provided with the vehicle type: ";
	    cin>>vehicle;
	    cout<<"Enter your Destination: ";
	    cin>>destination;
	    cout<<"Enter total distance to be travelled: ";
	    cin>>distance;
	    calcluate_price(vehicle,distance);
 	 }
	void Display_trip()
	{
		cout<<"Your Passenger code: "<<passenger_code<<endl;
		cout<<"Passenger name: "<<passenger_name<<endl;
		if (vehicle==1)
		 cout<<"Vehicle type: Car"<<endl;
		else if (vehicle==2)
		 cout<<"Vehicle type: Bus"<<endl;
	    else if ( vehicle==3)
		 cout<<"Vehicle type: Train"<<endl;
		else if (vehicle==4)
		 cout<<"Vehicle type: Plane"<<endl;
	 	cout<<"Your Destination: "<<destination<<endl;
		cout<<"Price: "<<price<<endl;  
		cout<<"Total Amount to be paid  after discount: "<<Total_price<<endl;		 
	}   
};
class Passenger :public Travel
{
		//int Pno;
		char user_name[40],password[16],first_name[40],last_name[40],passcode[16];
	public:
	   char* username_conf()
	 {
		return user_name;
	 }
	   char* password_conf()
	 {
		return password;
	 }
	  Passenger()
	  {
 		strcpy(first_name,"Aditya");
 		strcpy(last_name,"Goutam");
  		strcpy(user_name,"adityagoutam");
  		strcpy(password,"qwerty");
  	  }
	void Getinfo()
	{
		cout<<"Enter your first name: ";
		cin>>first_name;
		cout<<"Enter your last name: ";
		cin>>last_name;
		cout<<"Enter your username: ";
		cin>>user_name;
		cout<<"Enter your password: ";
		cin>>password;
		cout<<"Confirm password: ";
		cin>>passcode;
		if(strcmp(password,passcode)==0)
		{
		 cout<<"Account has been created"<<endl;
		 sleep(2);
		}
		else 
	    {
		 cout<<"Something went wrong"<<endl;		
	    }
	}
	void Showinfo()
	{
		cout<<"Name = "<<first_name<<endl;
		cout<<"Your username = "<<user_name<<endl;
	}		
};
class Passenger_info: public Passenger
{
 int passenger_num;
 char Mobile_num[10];
 char Gender[6];
 int age;
 public:
 Passenger_info()
 {
 	passenger_num=101;
 	strcpy(Mobile_num,"9876543201");
 	strcpy(Gender,"male");
 	age=18;	
 }
 void Details_input()
 {
 	cout<<"Enter your passenger number: ";
 	cin>>passenger_num;
 	cout<<"Enter your mobile number: ";
 	cin>>Mobile_num;
 	cout<<"Enter your Gender: ";
 	cin>>Gender;
 	cout<<"Enter your age: ";
 	cin>>age;
 }		
};
class Hotel
{
	int passenger_code_hotel,family_members,total_price,continent,currency_price;
	long int hotel_price, hotel_final_price;
	char passenger_name_hotel[20], country, city[20];
	char answer5;
public:
    int passenger_code_hotel_search()
	{
		return passenger_code_hotel;
	} 
    void do_calculation(char,int)
    {
       if(country=='A')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.098;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.098;}
	   }
	   else if(country=='B')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.11;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.11;} 
	   }
	   else if(country=='C')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*1;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*1;} 
	   }
	   else if(country=='D')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*1.52;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*1.52;} 
	   }
	   else if(country=='E')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*1.60;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*1.60;} 
	   }
	   else if(country=='F')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.058;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.058;} 
	   }
	   else if(country=='G')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.051;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.051;} 
	   }
	   else if(country=='H')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.89;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.89;} 
	   }
	   else if(country=='I')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.052;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.052;} 
	   }
	   else if(country=='J')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.019;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.019;} 
	   }
	   else if(country=='K')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.051;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.051;} 
	   }
	   else if(country=='L')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.013;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.013;} 
	   }
	   else if(country=='M')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.013;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.013;} 
	   }
	   else if(country=='N')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.013;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.013;} 
	   }
	   else if(country=='O')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.013;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.013;} 
	   }
	   else if(country=='P')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.013;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.013;} 
	   }
	   else if(country=='Q')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.013;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.013;} 
	   }
	   else if(country=='R')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.013;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.013;} 
	   }
	   else if(country=='S')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.014;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.014;} 
	   }
	   else if(country=='T')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.018;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.018;} 
	   }
	   else if(country=='U')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*1.96;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*1.96;} 
	   }
	   else if(country=='V')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.27;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.27;} 
	   }
	   else if(country=='W')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.014;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.014;} 
	   }
	   else if(country=='X')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.014;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.014;} 
	   }
	   else if(country=='Y')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.83;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.83;} 
	   }
	   else if(country=='Z')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.058;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.058;} 
	   }
	   else if(country=='a')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*10.54;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*10.54;} 
	   }
	   else if(country=='b')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*46.63;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*46.63;} 
	   }
	   else if(country=='c')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.52;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.52;} 
	   }
	   else if(country=='d')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.23;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.23;} 
	   }
	   else if(country=='e')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.077;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.077;} 
	   }
	   else if(country=='f')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*1.43;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*1.43;} 
	   }
	   else if(country=='g')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*5.06;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*5.06;} 
	   }
	      else if(country=='h')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.21;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.21;} 
	   }
	      else if(country=='i')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.19;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.19;} 
	   }
	   else if(country=='j')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.020;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.020;} 
	   }
	   else if(country=='k')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.020;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.020;} 
	   }
	   else if(country=='l')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.020;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.020;} 
	   }
	   else if(country=='m')
	   { 	
 	    	if((family_members>=1)&&(family_members<=4))
 	    	{hotel_price=25000;
 	    	hotel_final_price=25000*0.020;}
 	    	else if(family_members>=5)
 	    	{hotel_price=50000;
 	    	hotel_final_price=50000*0.020;} 
	   }
	   else
	    cout<<"ERROR..........."<<endl;
		do_discount(hotel_price,hotel_final_price);    
    }
    void do_discount(float,float)
    {
    	if(hotel_price<=25000)
    	{total_price=hotel_price-0.10*hotel_price;
    	total_price=hotel_final_price-0.10*hotel_final_price;}
    	else if(hotel_price>25000)
    	{total_price=hotel_price-0.15*hotel_price;
    	total_price=hotel_final_price-0.15*hotel_final_price;}
    }
	void input_hotel()
	{
		cout<<"Enter the Passenger Code=";
 		cin>>passenger_code_hotel;
 		cout<<"Enter the Passenger's name=";
 		cin>>passenger_name_hotel;
 		cout<<"Have you seen the trip planner??"<<endl<<"select y for yes=";
 		cin>>answer5;
 		if(answer5=='y')
 		{
 		   cout<<"You can choose your Place for stay"<<endl;
 		   cout<<"1. Asia"<<endl;
 		   cout<<"2. Europe"<<endl;
 		   cout<<"3. North America"<<endl;
 		   cout<<"4. South America"<<endl;
 		   cout<<"5. Africa"<<endl;
 		   cout<<"6. Australia"<<endl;
 		   cout<<"7. Antarctica"<<endl;
 		   cout<<"Enter the No. corresponding to the Continent in which you have to live = ";
 		   cin>>continent;
 		   if (continent==1)
 		   {
   		 	   cout<<"You can select from the following Countries"<<endl;
   		 	   cout<<"A. China"<<endl;
   		 	   cout<<"B. Hong Kong"<<endl;
   		 	   cout<<"C. India"<<endl;
   		 	   cout<<"D. Japan"<<endl;
   		 	   cout<<"E. Nepal"<<endl;
   		 	   cout<<"F. Malaysia"<<endl;
   		 	   cout<<"G. Qatar"<<endl;
   		 	   cout<<"H. Russia"<<endl;
   		 	   cout<<"I. Saudi Arabia"<<endl;
   		 	   cout<<"J. Singapore"<<endl;
   		 	   cout<<"K. UAE"<<endl;
 		   }
   		   else if(continent==2)
			   {
   		 	      cout<<"L. Germany"<<endl;
   		 	      cout<<"M. United Kingdom"<<endl;
   		 	      cout<<"N. Spain"<<endl;
   		 	      cout<<"O. France"<<endl;
   		 	      cout<<"P. Italy"<<endl;
   		 	      cout<<"Q. Poland"<<endl;
   		 	      cout<<"R. Denmark"<<endl;
   		       }
           else if(continent==3)
		   {
   		 	   cout<<"You can select from the following Countries"<<endl;
   		 	   cout<<"S. Bermuda"<<endl;
   		 	   cout<<"T. Canada"<<endl;
   		 	   cout<<"U. Jamaica"<<endl;
   		 	   cout<<"V. Mexico"<<endl;
   		 	   cout<<"W. Panama"<<endl;
   		 	   cout<<"X. USA"<<endl;
 		   }
			else if(continent==4)
		   {
   		 	   cout<<"You can select from the following Countries"<<endl;
   		 	   cout<<"Y. Argentina"<<endl;
   		 	   cout<<"Z. Brazil"<<endl;
   		 	   cout<<"a. Chile"<<endl;
   		 	   cout<<"b. Colombia"<<endl;
   		 	   cout<<"c. Uruguay"<<endl;
 		   }   
 		   else if(continent==5)
		   {
   		 	   cout<<"You can select from the following Countries"<<endl;
   		 	   cout<<"d. Egypt"<<endl;
   		 	   cout<<"e. Ghana"<<endl;
   		 	   cout<<"f. Kenya"<<endl;
   		 	   cout<<"g. Nigeria"<<endl;
   		 	   cout<<"h. South Africa"<<endl;
   		 	   cout<<"i. Zambia"<<endl;
 		   }
 		   else if(continent==6)
		   {
   		 	   cout<<"You can select from the following Countries"<<endl;
   		 	   cout<<"j. Sydney"<<endl;
   		 	   cout<<"k. Melbourne"<<endl;
   		 	   cout<<"l. Adelaide"<<endl;
   		 	   cout<<"m. Perth"<<endl;
 		   }
 		   else if(continent==7)
 		   {
   		       cout<<"We dont provide Services in Antartica"<<endl;	
   		   }
 		   cout<<"Enter the Alphabet either in Capital or Small Letter corresponding to the Country which you want = ";  
           cin>>country;
   		   cout<<"Enter the City you want to stay in = ";
   		   cin>>city;
 		   cout<<"Please enter how many family members do you have ";
 		   cin>>family_members;
	       do_calculation(country,family_members);
 		}
 		else
 		cout<<"First please see the Trip Planner";
	}
	void display_hotel()
	{
		cout<<"Your Passenger code is="<<passenger_code_hotel<<endl;
		cout<<"Passanger Name is ="<<passenger_name_hotel<<endl;
		cout<<"your Hotel City is ="<<city<<endl;
		cout<<right<<setw(120)<<setfill('_')<<"_"<<endl;
		cout<<"Price for the Room is="<<hotel_price<<"Rupees"<<endl<<"OR"<<endl;
		if(country=='A')
		cout<<"Price for the Room is="<<hotel_final_price<<" Chinese Yuan"<<endl;
		else if(country=='B')
		cout<<"Price for the Room is="<<hotel_final_price<<" Hong Kong Dollar"<<endl;
		else if(country=='D')
		cout<<"Price for the Room is="<<hotel_final_price<<" Japanese Yen"<<endl;
		else if(country=='E')
		cout<<"Price for the Room is="<<hotel_final_price<<" Nepalese Rupees"<<endl;
		else if(country=='F')
		cout<<"Price for the Room is="<<hotel_final_price<<" Malaysian Ringgit"<<endl;
		else if(country=='G')
		cout<<"Price for the Room is="<<hotel_final_price<<" Qatari Rial"<<endl;
		else if(country=='H')
		cout<<"Price for the Room is="<<hotel_final_price<<" Russian Ruble"<<endl;
		else if(country=='I')
		cout<<"Price for the Room is="<<hotel_final_price<<" Saudi Riyal"<<endl;
		else if(country=='J')
		cout<<"Price for the Room is="<<hotel_final_price<<" Singapore Dollar"<<endl;
		else if(country=='K')
		cout<<"Price for the Room is="<<hotel_final_price<<" United Arab Emirates Dirham"<<endl;
		else if(country=='L')
		cout<<"Price for the Room is="<<hotel_final_price<<" Euro"<<endl;
		else if(country=='M')
		cout<<"Price for the Room is="<<hotel_final_price<<" Euro"<<endl;
		else if(country=='N')
		cout<<"Price for the Room is="<<hotel_final_price<<" Euro"<<endl;
		else if(country=='O')
		cout<<"Price for the Room is="<<hotel_final_price<<" Euro"<<endl;
		else if(country=='P')
		cout<<"Price for the Room is="<<hotel_final_price<<" Euro"<<endl;
		else if(country=='Q')
		cout<<"Price for the Room is="<<hotel_final_price<<" Euro"<<endl;
		else if(country=='R')
		cout<<"Price for the Room is="<<hotel_final_price<<" Euro"<<endl;
		else if(country=='S')
		cout<<"Price for the Room is="<<hotel_final_price<<" Bermudan Dollar"<<endl;
		else if(country=='T')
		cout<<"Price for the Room is="<<hotel_final_price<<" Canadian Dollar"<<endl;
		else if(country=='U')
		cout<<"Price for the Room is="<<hotel_final_price<<" Jamaican Dollar"<<endl;
		else if(country=='V')
		cout<<"Price for the Room is="<<hotel_final_price<<" Mexican Peso"<<endl;
		else if(country=='W')
		cout<<"Price for the Room is="<<hotel_final_price<<" Panamanian Balboa"<<endl;
		else if(country=='X')
		cout<<"Price for the Room is="<<hotel_final_price<<" United States Dollar"<<endl;
		else if(country=='Y')
		cout<<"Price for the Room is="<<hotel_final_price<<" Argentine Peso"<<endl;
		else if(country=='Z')
		cout<<"Price for the Room is="<<hotel_final_price<<" Brazilian Real"<<endl;
		else if(country=='a')
		cout<<"Price for the Room is="<<hotel_final_price<<" Chilean Peso"<<endl;
		else if(country=='b')
		cout<<"Price for the Room is="<<hotel_final_price<<" Colombian Peso"<<endl;
		else if(country=='c')
		cout<<"Price for the Room is="<<hotel_final_price<<" Uruguayan Peso"<<endl;
		else if(country=='d')
		cout<<"Price for the Room is="<<hotel_final_price<<" Egyptian Pound"<<endl;
		else if(country=='e')
		cout<<"Price for the Room is="<<hotel_final_price<<" Ghanaian Cedi"<<endl;
		else if(country=='f')
		cout<<"Price for the Room is="<<hotel_final_price<<" Kenyan Shilling"<<endl;
		else if(country=='g')
		cout<<"Price for the Room is="<<hotel_final_price<<" Nigerian Naira"<<endl;
		else if(country=='h')
		cout<<"Price for the Room is="<<hotel_final_price<<" South African Rand"<<endl;
		else if(country=='i')
		cout<<"Price for the Room is="<<hotel_final_price<<" Zambian Kwacha"<<endl;
		else if(country=='j')
		cout<<"Price for the Room is="<<hotel_final_price<<" Australian Dollar"<<endl;
		else if(country=='k')
		cout<<"Price for the Room is="<<hotel_final_price<<" Australian Dollar"<<endl;
		else if(country=='l')
		cout<<"Price for the Room is="<<hotel_final_price<<" Australian Dollar"<<endl;
		else if(country=='m')
		cout<<"Price for the Room is="<<hotel_final_price<<" Australian Dollar"<<endl;
		cout<<right<<setw(120)<<setfill('_')<<"_"<<endl;
        cout<<"Total Price for the Room after Discount is ="<<total_price<<" Rupees"<<endl<<"OR"<<endl;
        if(country=='A')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Chinese Yuan"<<endl;
		else if(country=='B')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Hong Kong Dollar"<<endl;
		else if(country=='D')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Japanese Yen"<<endl;
		else if(country=='E')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Nepalese Rupees"<<endl;
		else if(country=='F')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Malaysian Ringgit"<<endl;
		else if(country=='G')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Qatari Rial"<<endl;
		else if(country=='H')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Russian Ruble"<<endl;
		else if(country=='I')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Saudi Riyal"<<endl;
		else if(country=='J')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Singapore Dollar"<<endl;
		else if(country=='K')
		cout<<"Price for the Room after Discount is="<<currency_price<<" United Arab Emirates Dirham"<<endl;
		else if(country=='L')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Euro"<<endl;
		else if(country=='M')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Euro"<<endl;
		else if(country=='N')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Euro"<<endl;
		else if(country=='O')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Euro"<<endl;
		else if(country=='P')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Euro"<<endl;
		else if(country=='Q')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Euro"<<endl;
		else if(country=='R')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Euro"<<endl;
		else if(country=='S')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Bermudan Dollar"<<endl;
		else if(country=='T')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Canadian Dollar"<<endl;
		else if(country=='U')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Jamaican Dollar"<<endl;
		else if(country=='V')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Mexican Peso"<<endl;
		else if(country=='W')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Panamanian Balboa"<<endl;
		else if(country=='X')
		cout<<"Price for the Room after Discount is="<<currency_price<<" United States Dollar"<<endl;
		else if(country=='Y')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Argentine Peso"<<endl;
		else if(country=='Z')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Brazilian Real"<<endl;
		else if(country=='a')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Chilean Peso"<<endl;
		else if(country=='b')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Colombian Peso"<<endl;
		else if(country=='c')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Uruguayan Peso"<<endl;
		else if(country=='d')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Egyptian Pound"<<endl;
		else if(country=='e')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Ghanaian Cedi"<<endl;
		else if(country=='f')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Kenyan Shilling"<<endl;
		else if(country=='g')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Nigerian Naira"<<endl;
		else if(country=='h')
		cout<<"Price for the Room after Discount is="<<currency_price<<" South African Rand"<<endl;
		else if(country=='i')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Zambian Kwacha"<<endl;
		else if(country=='j')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Australian Dollar"<<endl;
		else if(country=='k')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Australian Dollar"<<endl;
		else if(country=='l')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Australian Dollar"<<endl;
		else if(country=='m')
		cout<<"Price for the Room after Discount is="<<currency_price<<" Australian Dollar"<<endl;
		else 
		cout<<"ERROR..........................."<<endl;
		cout<<right<<setw(120)<<setfill('_')<<"_"<<endl;
	}
};
 
int main()
{       
        int choice1, choice2, choice3, choice4, choice5, choice6, choice7;
        char answer3,answer4;
        do{
		//system("color 0D");
		system("clear");
		cout<<"\n"<<right<<setw(63)<<setfill('*')<<"TravelGuru"<<right<<setw(57)<<setfill('*')<<"*"<<endl;
		cout<<right<<setw(120)<<setfill('_')<<"_"<<endl;
		cout<<right<<setw(23)<<setfill(' ')<<"1.SINGUP"<<endl;
		cout<<right<<setw(25)<<setfill(' ')<<"\n\t\t2.LOGIN"<<endl;
		cout<<right<<setw(120)<<setfill('_')<<"_"<<endl;
		Passenger P;
		Passenger_info PI;
		fstream f;
		cout<<"select your choice: ";
		cin>>choice1;	
    	switch(choice1)
		{      
		case 1: {           	
					f.open("Travel.txt",ios::out);
					PI.Details_input(); 
					P.Getinfo();
					f.write((char*)&P,sizeof(P));
		}
		break;

		case 2: { 		              
	            	char username[40],password[16];
					cout<<"Enter your username: ";
					cin>>username;	
	            	f.open("Travel.txt",ios::in);
					while(f.read((char*)&P,sizeof(P)))
					{
					if(strcmp(P.username_conf(),username)==0)
					{
   						cout<<"Enter your password: ";
   						cin>>password;
   						if(strcmp(P.password_conf(),password)==0)
   						{
   						    system("clear");
   						    //system("color C0");
   						    cout<<"\t\t\t\t\t\tLoading Page";
   						    cout<<".";
   						    sleep(2);
   						    cout<<".";
   						    sleep(2);
   						    cout<<".";
   						    sleep(2);
   							cout<<".";
   						   	sleep(2);
   					    	cout<<".";
   					    	sleep(2);
   					    	do{
    					    Travel T;
    					    Hotel H;
							fstream F;
 						    system("clear");
							//system("color 8B");
							    cout<<"\n\n\t\t\t\t\t\t***MAIN MENU***"<<endl;
								cout<<"\t\t\t\t\t\t1.New Trip or Hotel."<<endl;
								cout<<"\t\t\t\t\t\t2.Show travelling history."<<endl;
								cout<<"\t\t\t\t\t\t3.Search travelling history."<<endl;
								cout<<"\t\t\t\t\t\t4.Delete history."<<endl;
								cout<<"\t\t\t\t\t\t5.Modify travelling history."<<endl;
								cout<<"\t\t\t\t\t\tSelect your choice: ";
							    cin>>choice2;
	    						switch(choice2)
    							{
									case 1:{cout<<"1.Trip Planner"<<endl;
	              							cout<<"2.Hotel Planner"<<endl;
	              cout<<"Select your choice: ";
	              cin>>choice3;
	    switch(choice3)
		{       
        case 1: {
       	          //system("color 0A");
                  F.open("NewTravel.txt",ios::out|ios::app|ios::binary);
				  char answer1='y';
				  while(answer1=='y')
				  {
					T.Input_trip();
					F.write((char*)&T,sizeof(T));
					cout<<"Do you want to plan a new trip again...?";
					cin>>answer1;
					system("clear");
				  }
					F.close();  
			    }break;
		case 2:	{  
			        F.open("Hotel.txt",ios::out|ios::app|ios::binary);
				  char answer2='y';
				  while(answer2=='y')
				  {
					H.input_hotel();
					F.write((char*)&H,sizeof(H));
					cout<<"Do you want to add a new Place for Hotel again...?";
					cin>>answer2;
					system("clear");
				  }
					F.close(); 
		        }break;
		}
	}break;
	case 2: {
                  cout<<"1.Trip History"<<endl;
	              cout<<"2.Hotel History"<<endl;
	              cout<<"Please enter which history you want to see: ";
	              cin>>choice4;
	              switch(choice4)
	              {
        case 1:       	
	              {       //system("color 0E");
	                F.open("NewTravel.txt",ios::in);
					while(F.read((char*)&T,sizeof(T)))
					{
					 T.Display_trip();
				    }
				     F.close();
	              }break;
		case 2: {
			               //system("color 0E");
	                F.open("Hotel.txt",ios::in);
					while(F.read((char*)&H,sizeof(H)))
					{
					 H.display_hotel();
				    }
				     F.close();  
  	            }break;
	              }
		    }break;
	case 3: {    
	              cout<<"1.Trip Search"<<endl;
	              cout<<"2.Hotel Search"<<endl;
	              cout<<"Please enter which option you want to search: ";
	              cin>>choice5;
	              switch(choice5)
	              {
	              case 1: { //system("color 79");
	                      int passenger_code_trip;
					      cout<<"Enter the Passenger code for the trip to be searched for: ";
						  cin>>passenger_code_trip;
						  F.open("NewTravel.txt",ios::in);
						  while(F.read((char*)&T,sizeof(T)))
					       {
					         if(T.passenger_code_trip_search()==passenger_code_trip)
					         T.Display_trip();
					       }
					 	F.close();
	                      }break;
	              case 2:{ //system("color 79");
	                      int passenger_code_hotel;
					      cout<<"Enter the Passenger code for the Hotel to be searched for: ";
						  cin>>passenger_code_hotel;
						  F.open("Hotel.txt",ios::in);
						  while(F.read((char*)&H,sizeof(H)))
					       {
					         if(H.passenger_code_hotel_search()==passenger_code_hotel)
					         H.display_hotel();
					       }
					 	F.close();
	                      }break;              
	              }
            }break;
	case 4: {     cout<<"1.Delete Trip"<<endl;
	              cout<<"2.Cancel Hotel"<<endl;
	              cout<<"Select your choice: ";
	              cin>>choice6;
	              switch(choice6)
              {
        case 1: {   //system("color F5");
	                fstream ftemp,x,y;
					int flag=0,passenger_code_trip;
					ftemp.open("Travelinfo.txt",ios::out);
					cout<<"Enter the passenger code for the Trip to be deleted = ";
					cin>>passenger_code_trip;
					F.open("NewTravel.txt",ios::in);
					while(F.read((char*)&T,sizeof(T)))
					{
					 if(T.passenger_code_trip_search()==passenger_code_trip)
						flag=1;
					 else
						ftemp.write((char*)&T,sizeof(T));
					 }
					 ftemp.close();
					if (flag==1)
					 cout<<"Record deleted"<<endl;
					else
					 cout<<"Record Not found"<<endl;
					x.open("Travelinfo.txt",ios::in);
					y.open("NewTravel.txt",ios::out);
					while(x.read((char*)&T,sizeof(T)))
					{
					 y.write((char*)&T,sizeof(T));
					}
					x.close();
					y.close();
					F.close();
                 }break;
          case 2:
		         {
         			//system("color F5");
	                fstream ftempp,e,r;
					int flag=0,passenger_code_hotel;
					ftempp.open("Hotelinfo.txt",ios::out);
					cout<<"Enter the passenger code for Hotel to be deleted = ";
					cin>>passenger_code_hotel;
					F.open("Hotel.txt",ios::in);
					while(F.read((char*)&H,sizeof(H)))
					{
					 if(H.passenger_code_hotel_search()==passenger_code_hotel)
						flag=1;
					 else
						ftempp.write((char*)&H,sizeof(H));
					 }
					 ftempp.close();
					if (flag==1)
					 cout<<"Record deleted"<<endl;
					else
					 cout<<"Record Not found"<<endl;
					e.open("Hotelinfo.txt",ios::in);
					r.open("Hotel.txt",ios::out);
					while(e.read((char*)&H,sizeof(H)))
					{
					 r.write((char*)&H,sizeof(H));
					}
					e.close();
					r.close();
					F.close();
         		 }break;      
	           }		
           }break;
      case 5: {  cout<<"1.Modify Trip"<<endl;
	             cout<<"2.Modify Hotel History"<<endl;
	             cout<<"Select your choice: ";
	             cin>>choice7;
	                switch(choice7)
		          {		 
         case 1:{   //system("color E4"); 
		            fstream ftemp,x,y;
					int flag=0,passenger_code_trip;
					ftemp.open("Travelinfo.txt",ios::out);
					cout<<"Enter the passenger code for the Trip to be Modified: ";
					cin>>passenger_code_trip;
					F.open("NewTravel.txt",ios::in);
					while(F.read((char*)&T,sizeof(T)))
					{
					 if(T.passenger_code_trip_search()==passenger_code_trip)
					  {
						T.Input_trip();
						ftemp.write((char*)&T,sizeof(T));
						flag=1;
					  }
					 else
						ftemp.write((char*)&T,sizeof(T));
					 }
					 ftemp.close();
					if (flag==1)
					 cout<<"Record Modified"<<endl;
					else
					 cout<<"Record Not found"<<endl;
					x.open("Travelinfo.txt",ios::in);
					y.open("NewTravel.txt",ios::out);
					while(x.read((char*)&T,sizeof(T)))
					{
					 y.write((char*)&T,sizeof(T));
					}
					x.close();
					y.close();
                    	F.close();
                 }break;
          case 2: {
                    //system("color E4"); 
		            fstream ftempp,e,r;
					int flag=0,passenger_code_hotel;
					ftempp.open("Hotelinfo.txt",ios::out);
					cout<<"Enter the passenger code for Hotel to be Modified: ";
					cin>>passenger_code_hotel;
					F.open("Hotel.txt",ios::in);
					while(F.read((char*)&H,sizeof(H)))
					{
					 if(H.passenger_code_hotel_search()==passenger_code_hotel)
					  {
						H.input_hotel();
						ftempp.write((char*)&H,sizeof(H));
						flag=1;
					  }
					 else
						ftempp.write((char*)&H,sizeof(H));
					 }
					 ftempp.close();
					if (flag==1)
					 cout<<"Record Modified"<<endl;
					else
					 cout<<"Record Not found"<<endl;
					e.open("Hotelinfo.txt",ios::in);
					r.open("Hotel.txt",ios::out);
					while(e.read((char*)&H,sizeof(H)))
					{
					 r.write((char*)&H,sizeof(H));
					}
					e.close();
					r.close();
                    	F.close();          	
                  }break;       
		           }
			  }break;
	}
	cout<<"Do you want to Select any other Option?";
	cin>>answer3;				 						  
	    	}while(answer3=='y');
   						    }
 				   else
   				    cout<<"Incorrect password"<<endl;
   				    sleep(3);
					   }
   				 else
					cout<<"Incorrect username!!"<<endl;  
					sleep(3);
				    }
				  }break;	  		  			  	
	}	
	   f.close();
	   system("clear");
	     cout<<"Do you want return to home page????\nType 'y' for yes ";
         cin>>answer4;
		}while(answer4=='y');
	   system("clear");
	   //system("color 60");
	   sleep(1);
	   cout<<"V";
	   sleep(1);
 	  cout<<"I";		
  	 	sleep(1);
	   cout<<"S";		
		sleep(1);
	   cout<<"I";		
		sleep(1);
	   cout<<"T";		
		sleep(1);
	   cout<<" ";		
		sleep(1);
	   cout<<"U";		
		sleep(1);
	   cout<<"S";		
		sleep(1);
	   cout<<" ";		
		sleep(1);
	   cout<<"A";		
		sleep(1);
	   cout<<"G";		
		sleep(1);
	   cout<<"A";		
		sleep(1);
	   cout<<"I";		
		sleep(1);
	   cout<<"N"<<endl<<endl;	
	   return 0;	
}
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
	 char destin[40];
	 int Tprice,price,disc;
	 float distance;
	public:
	 int passecode()
	 {
 		return passenger_code;
 	 }
	 Travel()
	 {
 		passenger_code=101;
 		strcpy(passenger_name,"Aditya");
 		Tprice=0;
 		price=0;
 		disc=0;
 		distance=0;
 	 }
 	void calprice(int ,float)
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
		 Tprice=price-0.05*price;
		
		else if((price>2000)&&(price<=6000))
		 Tprice=price-0.1*price;
		
		else if((price>6000)&&(price<=10000))
		 Tprice=price-0.15*price;
		 
		else if((price>10000)&&(price<=15000))
		 Tprice=price-0.2*price;    	
 	 } 
 	void Input()
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
	    cin>>destin;
	    cout<<"Enter total distance to be travelled: ";
	    cin>>distance;
	    calprice(vehicle,distance);
 	 }
	void Display()
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
	 	cout<<"Your Destination: "<<destin<<endl;
		cout<<"Price: "<<price<<endl;  
		cout<<"Total Amount to be paid  after discount: "<<Tprice<<endl;		 
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
	int pascodee,htltype,fmlm,tpriceee,conti,tpriceeec;
	long int priceee, priceeec;
	char pasnamee[20], country, city[20];
	char ans7;
public:
    int ppascodee()
	{
		return pascodee;
	} 
    void docalc(char,int)
    {
       if(country=='A')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.098;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.098;}
	   }
	   else if(country=='B')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.11;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.11;} 
	   }
	   else if(country=='C')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*1;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*1;} 
	   }
	   else if(country=='D')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*1.52;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*1.52;} 
	   }
	   else if(country=='E')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*1.60;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*1.60;} 
	   }
	   else if(country=='F')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.058;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.058;} 
	   }
	   else if(country=='G')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.051;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.051;} 
	   }
	   else if(country=='H')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.89;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.89;} 
	   }
	   else if(country=='I')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.052;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.052;} 
	   }
	   else if(country=='J')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.019;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.019;} 
	   }
	   else if(country=='K')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.051;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.051;} 
	   }
	   else if(country=='L')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.013;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.013;} 
	   }
	   else if(country=='M')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.013;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.013;} 
	   }
	   else if(country=='N')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.013;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.013;} 
	   }
	   else if(country=='O')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.013;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.013;} 
	   }
	   else if(country=='P')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.013;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.013;} 
	   }
	   else if(country=='Q')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.013;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.013;} 
	   }
	   else if(country=='R')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.013;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.013;} 
	   }
	   else if(country=='S')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.014;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.014;} 
	   }
	   else if(country=='T')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.018;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.018;} 
	   }
	   else if(country=='U')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*1.96;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*1.96;} 
	   }
	   else if(country=='V')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.27;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.27;} 
	   }
	   else if(country=='W')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.014;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.014;} 
	   }
	   else if(country=='X')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.014;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.014;} 
	   }
	   else if(country=='Y')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.83;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.83;} 
	   }
	   else if(country=='Z')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.058;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.058;} 
	   }
	   else if(country=='a')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*10.54;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*10.54;} 
	   }
	   else if(country=='b')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*46.63;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*46.63;} 
	   }
	   else if(country=='c')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.52;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.52;} 
	   }
	   else if(country=='d')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.23;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.23;} 
	   }
	   else if(country=='e')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.077;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.077;} 
	   }
	   else if(country=='f')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*1.43;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*1.43;} 
	   }
	   else if(country=='g')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*5.06;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*5.06;} 
	   }
	      else if(country=='h')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.21;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.21;} 
	   }
	      else if(country=='i')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.19;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.19;} 
	   }
	   else if(country=='j')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.020;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.020;} 
	   }
	   else if(country=='k')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.020;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.020;} 
	   }
	   else if(country=='l')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.020;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.020;} 
	   }
	   else if(country=='m')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.020;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.020;} 
	   }
	   else
	    cout<<"ERROR..........."<<endl;
		dodisc(priceee,priceeec);    
    }
    void dodisc(float,float)
    {
    	if(priceee<=25000)
    	{tpriceee=priceee-0.10*priceee;
    	tpriceeec=priceeec-0.10*priceeec;}
    	else if(priceee>25000)
    	{tpriceee=priceee-0.15*priceee;
    	tpriceeec=priceeec-0.15*priceeec;}
    }
	void inputt()
	{
		cout<<"Enter the Passenger Code=";
 		cin>>pascodee;
 		cout<<"Enter the Passenger's name=";
 		cin>>pasnamee;
 		cout<<"Have you seen the trip planner??"<<endl<<"select y for yes=";
 		cin>>ans7;
 		if(ans7=='y')
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
 		   cin>>conti;
 		   if (conti==1)
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
   		   else if(conti==2)
			   {
   		 	      cout<<"L. Germany"<<endl;
   		 	      cout<<"M. United Kingdom"<<endl;
   		 	      cout<<"N. Spain"<<endl;
   		 	      cout<<"O. France"<<endl;
   		 	      cout<<"P. Italy"<<endl;
   		 	      cout<<"Q. Poland"<<endl;
   		 	      cout<<"R. Denmark"<<endl;
   		       }
           else if(conti==3)
		   {
   		 	   cout<<"You can select from the following Countries"<<endl;
   		 	   cout<<"S. Bermuda"<<endl;
   		 	   cout<<"T. Canada"<<endl;
   		 	   cout<<"U. Jamaica"<<endl;
   		 	   cout<<"V. Mexico"<<endl;
   		 	   cout<<"W. Panama"<<endl;
   		 	   cout<<"X. USA"<<endl;
 		   }
			else if(conti==4)
		   {
   		 	   cout<<"You can select from the following Countries"<<endl;
   		 	   cout<<"Y. Argentina"<<endl;
   		 	   cout<<"Z. Brazil"<<endl;
   		 	   cout<<"a. Chile"<<endl;
   		 	   cout<<"b. Colombia"<<endl;
   		 	   cout<<"c. Uruguay"<<endl;
 		   }   
 		   else if(conti==5)
		   {
   		 	   cout<<"You can select from the following Countries"<<endl;
   		 	   cout<<"d. Egypt"<<endl;
   		 	   cout<<"e. Ghana"<<endl;
   		 	   cout<<"f. Kenya"<<endl;
   		 	   cout<<"g. Nigeria"<<endl;
   		 	   cout<<"h. South Africa"<<endl;
   		 	   cout<<"i. Zambia"<<endl;
 		   }
 		   else if(conti==6)
		   {
   		 	   cout<<"You can select from the following Countries"<<endl;
   		 	   cout<<"j. Sydney"<<endl;
   		 	   cout<<"k. Melbourne"<<endl;
   		 	   cout<<"l. Adelaide"<<endl;
   		 	   cout<<"m. Perth"<<endl;
 		   }
 		   else if(conti==7)
 		   {
   		       cout<<"We dont provide Services in Antartica"<<endl;	
   		   }
 		   cout<<"Enter the Alphabet either in Capital or Small Letter corresponding to the Country which you want = ";  
           cin>>country;
   		   cout<<"Enter the City you want to stay in = ";
   		   cin>>city;
 		   cout<<"Please enter how many family members do you have ";
 		   cin>>fmlm;
	       docalc(country,fmlm);
 		}
 		else
 		cout<<"First please see the Trip Planner";
	}
	void displayy()
	{
		cout<<"Your Passenger code is="<<pascodee<<endl;
		cout<<"Passanger Name is ="<<pasnamee<<endl;
		cout<<"your Hotel City is ="<<city<<endl;
		cout<<right<<setw(120)<<setfill('_')<<"_"<<endl;
		cout<<"Price for the Room is="<<priceee<<"Rupees"<<endl<<"OR"<<endl;
		if(country=='A')
		cout<<"Price for the Room is="<<priceeec<<" Chinese Yuan"<<endl;
		else if(country=='B')
		cout<<"Price for the Room is="<<priceeec<<" Hong Kong Dollar"<<endl;
		else if(country=='D')
		cout<<"Price for the Room is="<<priceeec<<" Japanese Yen"<<endl;
		else if(country=='E')
		cout<<"Price for the Room is="<<priceeec<<" Nepalese Rupees"<<endl;
		else if(country=='F')
		cout<<"Price for the Room is="<<priceeec<<" Malaysian Ringgit"<<endl;
		else if(country=='G')
		cout<<"Price for the Room is="<<priceeec<<" Qatari Rial"<<endl;
		else if(country=='H')
		cout<<"Price for the Room is="<<priceeec<<" Russian Ruble"<<endl;
		else if(country=='I')
		cout<<"Price for the Room is="<<priceeec<<" Saudi Riyal"<<endl;
		else if(country=='J')
		cout<<"Price for the Room is="<<priceeec<<" Singapore Dollar"<<endl;
		else if(country=='K')
		cout<<"Price for the Room is="<<priceeec<<" United Arab Emirates Dirham"<<endl;
		else if(country=='L')
		cout<<"Price for the Room is="<<priceeec<<" Euro"<<endl;
		else if(country=='M')
		cout<<"Price for the Room is="<<priceeec<<" Euro"<<endl;
		else if(country=='N')
		cout<<"Price for the Room is="<<priceeec<<" Euro"<<endl;
		else if(country=='O')
		cout<<"Price for the Room is="<<priceeec<<" Euro"<<endl;
		else if(country=='P')
		cout<<"Price for the Room is="<<priceeec<<" Euro"<<endl;
		else if(country=='Q')
		cout<<"Price for the Room is="<<priceeec<<" Euro"<<endl;
		else if(country=='R')
		cout<<"Price for the Room is="<<priceeec<<" Euro"<<endl;
		else if(country=='S')
		cout<<"Price for the Room is="<<priceeec<<" Bermudan Dollar"<<endl;
		else if(country=='T')
		cout<<"Price for the Room is="<<priceeec<<" Canadian Dollar"<<endl;
		else if(country=='U')
		cout<<"Price for the Room is="<<priceeec<<" Jamaican Dollar"<<endl;
		else if(country=='V')
		cout<<"Price for the Room is="<<priceeec<<" Mexican Peso"<<endl;
		else if(country=='W')
		cout<<"Price for the Room is="<<priceeec<<" Panamanian Balboa"<<endl;
		else if(country=='X')
		cout<<"Price for the Room is="<<priceeec<<" United States Dollar"<<endl;
		else if(country=='Y')
		cout<<"Price for the Room is="<<priceeec<<" Argentine Peso"<<endl;
		else if(country=='Z')
		cout<<"Price for the Room is="<<priceeec<<" Brazilian Real"<<endl;
		else if(country=='a')
		cout<<"Price for the Room is="<<priceeec<<" Chilean Peso"<<endl;
		else if(country=='b')
		cout<<"Price for the Room is="<<priceeec<<" Colombian Peso"<<endl;
		else if(country=='c')
		cout<<"Price for the Room is="<<priceeec<<" Uruguayan Peso"<<endl;
		else if(country=='d')
		cout<<"Price for the Room is="<<priceeec<<" Egyptian Pound"<<endl;
		else if(country=='e')
		cout<<"Price for the Room is="<<priceeec<<" Ghanaian Cedi"<<endl;
		else if(country=='f')
		cout<<"Price for the Room is="<<priceeec<<" Kenyan Shilling"<<endl;
		else if(country=='g')
		cout<<"Price for the Room is="<<priceeec<<" Nigerian Naira"<<endl;
		else if(country=='h')
		cout<<"Price for the Room is="<<priceeec<<" South African Rand"<<endl;
		else if(country=='i')
		cout<<"Price for the Room is="<<priceeec<<" Zambian Kwacha"<<endl;
		else if(country=='j')
		cout<<"Price for the Room is="<<priceeec<<" Australian Dollar"<<endl;
		else if(country=='k')
		cout<<"Price for the Room is="<<priceeec<<" Australian Dollar"<<endl;
		else if(country=='l')
		cout<<"Price for the Room is="<<priceeec<<" Australian Dollar"<<endl;
		else if(country=='m')
		cout<<"Price for the Room is="<<priceeec<<" Australian Dollar"<<endl;
		cout<<right<<setw(120)<<setfill('_')<<"_"<<endl;
        cout<<"Total Price for the Room after Discount is ="<<tpriceee<<" Rupees"<<endl<<"OR"<<endl;
        if(country=='A')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Chinese Yuan"<<endl;
		else if(country=='B')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Hong Kong Dollar"<<endl;
		else if(country=='D')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Japanese Yen"<<endl;
		else if(country=='E')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Nepalese Rupees"<<endl;
		else if(country=='F')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Malaysian Ringgit"<<endl;
		else if(country=='G')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Qatari Rial"<<endl;
		else if(country=='H')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Russian Ruble"<<endl;
		else if(country=='I')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Saudi Riyal"<<endl;
		else if(country=='J')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Singapore Dollar"<<endl;
		else if(country=='K')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" United Arab Emirates Dirham"<<endl;
		else if(country=='L')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Euro"<<endl;
		else if(country=='M')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Euro"<<endl;
		else if(country=='N')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Euro"<<endl;
		else if(country=='O')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Euro"<<endl;
		else if(country=='P')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Euro"<<endl;
		else if(country=='Q')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Euro"<<endl;
		else if(country=='R')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Euro"<<endl;
		else if(country=='S')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Bermudan Dollar"<<endl;
		else if(country=='T')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Canadian Dollar"<<endl;
		else if(country=='U')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Jamaican Dollar"<<endl;
		else if(country=='V')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Mexican Peso"<<endl;
		else if(country=='W')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Panamanian Balboa"<<endl;
		else if(country=='X')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" United States Dollar"<<endl;
		else if(country=='Y')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Argentine Peso"<<endl;
		else if(country=='Z')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Brazilian Real"<<endl;
		else if(country=='a')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Chilean Peso"<<endl;
		else if(country=='b')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Colombian Peso"<<endl;
		else if(country=='c')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Uruguayan Peso"<<endl;
		else if(country=='d')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Egyptian Pound"<<endl;
		else if(country=='e')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Ghanaian Cedi"<<endl;
		else if(country=='f')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Kenyan Shilling"<<endl;
		else if(country=='g')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Nigerian Naira"<<endl;
		else if(country=='h')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" South African Rand"<<endl;
		else if(country=='i')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Zambian Kwacha"<<endl;
		else if(country=='j')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Australian Dollar"<<endl;
		else if(country=='k')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Australian Dollar"<<endl;
		else if(country=='l')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Australian Dollar"<<endl;
		else if(country=='m')
		cout<<"Price for the Room after Discount is="<<tpriceeec<<" Australian Dollar"<<endl;
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
				  }break;
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
	case 1: {     cout<<"1.Trip Planner"<<endl;
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
					T.Input();
					F.write((char*)&T,sizeof(T));
					cout<<"Do you want to add a new trip again...?";
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
					H.inputt();
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
	              cout<<"Select your choice = ";
	              cin>>choice4;
	              switch(choice4)
	              {
        case 1:       	
	              {       //system("color 0E");
	                F.open("NewTravel.txt",ios::in);
					while(F.read((char*)&T,sizeof(T)))
					{
					 T.Display();
				    }
				     F.close();
	              }break;
		case 2: {
			               //system("color 0E");
	                F.open("Hotel.txt",ios::in);
					while(F.read((char*)&H,sizeof(H)))
					{
					 H.displayy();
				    }
				     F.close();  
  	            }break;
	              }
		    }break;
	case 3: {    
	              cout<<"1.Trip Search"<<endl;
	              cout<<"2.Hotel Search"<<endl;
	              cout<<"Select your choice = ";
	              cin>>choice5;
	              switch(choice5)
	              {
	              case 1: { //system("color 79");
	                      int pcode;
					      cout<<"Enter the Passenger code for the Trip to be searched = ";
						  cin>>pcode;
						  F.open("NewTravel.txt",ios::in);
						  while(F.read((char*)&T,sizeof(T)))
					       {
					         if(T.passecode()==pcode)
					         T.Display();
					       }
					 	F.close();
	                      }break;
	              case 2:{ //system("color 79");
	                      int hcode;
					      cout<<"Enter the Passenger code for the Hotel to be searched = ";
						  cin>>hcode;
						  F.open("Hotel.txt",ios::in);
						  while(F.read((char*)&H,sizeof(H)))
					       {
					         if(H.ppascodee()==hcode)
					         H.displayy();
					       }
					 	F.close();
	                      }break;              
	              }
            }break;
	case 4: {     cout<<"1.Delete Trip"<<endl;
	              cout<<"2.Cancel Hotel"<<endl;
	              cout<<"Select your choice = ";
	              cin>>choice6;
	              switch(choice6)
              {
        case 1: {   //system("color F5");
	                fstream ftemp,x,y;
					int flag=0,pcode;
					ftemp.open("Travelinfo.txt",ios::out);
					cout<<"Enter the passenger code for the Trip to be deleted = ";
					cin>>pcode;
					F.open("NewTravel.txt",ios::in);
					while(F.read((char*)&T,sizeof(T)))
					{
					 if(T.passecode()==pcode)
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
					int flag=0,hcode;
					ftempp.open("Hotelinfo.txt",ios::out);
					cout<<"Enter the passenger code for Hotel to be deleted = ";
					cin>>hcode;
					F.open("Hotel.txt",ios::in);
					while(F.read((char*)&H,sizeof(H)))
					{
					 if(H.ppascodee()==hcode)
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
	             cout<<"Select your choice = ";
	             cin>>choice7;
	                switch(choice7)
		          {		 
         case 1:{   //system("color E4"); 
		            fstream ftemp,x,y;
					int flag=0,pcode;
					ftemp.open("Travelinfo.txt",ios::out);
					cout<<"Enter the passenger code for the Trip to be Modified=";
					cin>>pcode;
					F.open("NewTravel.txt",ios::in);
					while(F.read((char*)&T,sizeof(T)))
					{
					 if(T.passecode()==pcode)
					  {
						T.Input();
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
					int flag=0,hcode;
					ftempp.open("Hotelinfo.txt",ios::out);
					cout<<"Enter the passenger code for Hotel to be Modified=";
					cin>>hcode;
					F.open("Hotel.txt",ios::in);
					while(F.read((char*)&H,sizeof(H)))
					{
					 if(H.ppascodee()==hcode)
					  {
						H.inputt();
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
	cout<<"Do you want to Select any other Option ?";
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
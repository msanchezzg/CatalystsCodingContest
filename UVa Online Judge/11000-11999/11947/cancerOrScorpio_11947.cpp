#include <iostream>
#include <string>
using namespace std;


bool leap_year(int y){

	if (y%4==0){
		if (y%100!=0 || y%400==0) return true;
	}
	return false;
}


int main(){

	int cases,day,month,year,dat;
	bool leap;
	string sign;
	cin>>cases;

	for(int i=1;i<=cases;i++){
		cin>>year;
		month=year/1000000;
		year%=1000000;
		day=year/10000;
		year%=10000;
		leap=leap_year(year);

		for(int add=40*7;add>0;add--){
			day++;
			
			switch (month){
				case 1: case 3: case 5: case 7: case 8: case 10: case 12:{
					if (day>31){
						day=1;
						month++;
					}
					break;
				}	
				case 2:{
					if (day>29 && leap==true){
						day=1;
						month++;
					}
					else if(day>28 && leap==false){
						day=1;
						month++;
					}
					break;
				}	
				default:{
					if (day>30){
						day=1;
						month++;
					}
					break;	
				}		
			}

			if (month>12){
				day=1;
				month=1;
				year++;
				leap=leap_year(year);
			}
		}

		dat=day+month*100;
		if (dat>=1223 || dat<=120) sign="capricorn";
		else if(dat<=219) sign="aquarius";
		else if(dat<=320) sign="pisces";
		else if(dat<=420) sign="aries";
		else if(dat<=521) sign="taurus";
		else if(dat<=621) sign="gemini";
		else if(dat<=722) sign="cancer";
		else if(dat<=821) sign="leo";
		else if(dat<=923) sign="virgo";
		else if(dat<=1023) sign="libra";
		else if(dat<=1122) sign="scorpio";
		else if(dat<=1222) sign="sagittarius";

		printf("%d %02d/%02d/%04d %s\n",i,month,day,year,sign.c_str());
	}
	return 0;
}
                    

#include <iostream>
using namespace std;


bool leap_year(int y){

	if (y%4==0){
		if (y%100!=0 || y%400==0) return true;
	}
	return false;
}


int main(){

	int add, day, month, year;
	bool leap;

	while (cin>>add>>day>>month>>year && add){
		leap=leap_year(year);

		while (add>366){
			if (leap==false){
				add-=365;
				year++;
				leap=leap_year(year);
				if(leap==true && month>2) add--;
			}
			else{
				if(month<=2){
					add-=366;
					year++;
					leap=false;
					if(month==2 && day==29){
						day=1;
						month++;
					}
				}
				else{
					add-=365;
					year++;
					leap=false;
				}
			}
		}
		
		if (add==365){
			if (leap==false || (leap==true && month>2)){
				add-=365;
				year++;
			}	
		}
		
		for(;add>0;add--){
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

		cout<<day<<' '<<month<<' '<<year<<endl;
	}        
    return 0;
}
                    

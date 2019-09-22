#include <iostream>
using namespace std;

int main(){

    int cases,calls,time,mile,juice,rate;
    cin>>cases;

    for(int i=1;i<=cases;i++){
    	cin>>calls;
    	mile=0;
    	juice=0;

    	for(;calls>0;calls--){
    		cin>>time;
    		time++;

    		rate=0;
    		rate+=time/30;
    		if(time%30!=0) rate++;
    		mile+=10*rate;

    		rate=0;
    		rate+=time/60;
    		if(time%60!=0) rate++;
    		juice+=15*rate;

    	}

    	cout<<"Case "<<i<<": ";
    	if (mile<juice) 	 cout<<"Mile "<<mile<<endl;
    	else if (mile>juice) cout<<"Juice "<<juice<<endl;
    	else 				 cout<<"Mile Juice "<<mile<<endl;
    }    
	return 0;
}
                    

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){

    int a, b, carry, car, x, y;
    string as, bs, aux;

    while(cin>>as>>bs){
    	x=stoi(as);
    	y=stoi(bs);
    	if(x==0 && y==0) break;

    	carry=0;
    	car=0;
    	a=as.size()-bs.size();
    	b=abs(a);

    	aux.assign(b,'0');

    	if(a>=0) bs.insert(0,aux);
    	else	 as.insert(0,aux);

    	for(int i=as.size()-1;i>=0;i--){
    		if (as[i]+bs[i]+car>=106) {
    			carry++;
    			car=1;
    		}
    		else car=0;	
    	}
		
    	if (carry==0) cout<<"No carry operation."<<endl;
    	else if(carry==1) cout<<carry<<" carry operation."<<endl;
    	else cout<<carry<<" carry operations."<<endl; 
    }
	return 0;
}
                    

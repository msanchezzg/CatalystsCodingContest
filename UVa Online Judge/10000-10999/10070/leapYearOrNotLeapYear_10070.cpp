#include <iostream>
#include <string>
using namespace std;

int main(){

	string y;
	int a,b,c;
	bool leap,hulu,bulu;
	cin>>y;
	c=0;

	while(c==0){
		leap=false;
		hulu=false;
		bulu=false;
		a=0;
		b=0;

		for(int i=0;i<y.size();i++) {
			if(i%2==0) a+=(y[i]-'0');
			else 	   b+=(y[i]-'0');
		}

		if(y[y.size()-1]=='0' && y[y.size()-2]=='0'){	//divisible por 100
			y=y.substr(y.size()-4,2);
			if(stoi(y)%4==0) leap=true;
		}

		else {
			y=y.substr(y.size()-2,2);
			if(stoi(y)%4==0) leap=true;
		}

		if(y[y.size()-1]=='0' || y[y.size()-1]=='5'){
			if ((a+b)%3==0) 		hulu=true;
			if((a-b)%11==0 && leap) bulu=true;
		}

		if (leap) cout<<"This is leap year."<<endl;
		if (hulu) cout<<"This is huluculu festival year."<<endl;
		if (bulu) cout<<"This is bulukulu festival year."<<endl;
		if (!leap && !hulu && !bulu) cout<<"This is an ordinary year."<<endl;
		
		if(cin>>y) cout<<'\n';
		else c=1;
	}     
	return 0;
}
                    

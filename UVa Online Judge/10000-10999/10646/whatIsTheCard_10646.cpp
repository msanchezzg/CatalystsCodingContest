#include <iostream>
#include <string>
using namespace std;

int main(){

	int x,y,casos,n;
	string card;
	cin>>casos;

	for(int i=1;i<=casos;i++){
		y=0;
		n=0;
		for(int j=0;j<3;j++){
			cin>>card;
			n++;
			if(isalpha(card[0])) x=10;
			else x=((int)card[0]-48);
			y+=x;

			for(int k=0;k<(10-x);k++){
				cin>>card;
				n++;
			}	
		}

		for(int k=0;k<y;k++){
			cin>>card;
			n++;
		}	
		cout<<"Case "<<i<<": "<<card<<endl;

		for(int k=0;k<52-n;k++) cin>>card;
	}
	return 0;
}
                    

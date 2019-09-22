#include <iostream>
using namespace std;


int main(){

    int participants,budget,num_hotels,num_weeks,price,beds,final,min_price;
	bool ok;

	while(cin>>participants>>budget>>num_hotels>>num_weeks) {
		min_price=100001;
		for(int i=0;i<num_hotels;i++){
			cin>>price;
			ok=false;

			for(int j=0;j<num_weeks;j++){
				cin>>beds; 
				if(beds>=participants) ok=true;
			}
			if(price<min_price && ok==true) min_price=price;
		}
		final=(min_price*participants);
		if (final>budget) cout<<"stay home"<<endl;
		else cout<<final<<endl;

	}   
    return 0;
}
                    

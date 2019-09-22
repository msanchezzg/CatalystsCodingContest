#include <iostream>
using namespace std;


void wave(int am){
	int i=1;

	for(int j=0;j<am;j++){
		for(int k=0;k<i;k++){
			cout<<i;
		}
		i++;
		cout<<'\n';
	}

	i--;
	for(int j=1;j<am;j++){
		i--;
		for(int k=0;k<i;k++){
			cout<<i;
		}
		
	cout<<'\n';
	}
}


int main(){

	int cases, am, fr;
	cin>>cases;

	while(cases--){
		cin>>am>>fr;
		while(fr--) {
			wave(am);
			if(fr) cout<<"\n";
		}

		if (cases) cout<<'\n';
	}
	
	return 0;
}
                    

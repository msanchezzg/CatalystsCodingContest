#include <iostream>
#include <string>
using namespace std;

int main(){

	int casos;
	string num;
	cin>>casos;

	for(;casos>0;casos--){
		cin>>num;

		if(num.size()==5) cout<<3<<endl;
		else{		
			if(num[0]=='o'){
				if(num[1]=='n' || num[2]=='e') cout<<1<<endl;
				else cout<<2<<endl;
			}
			else{
				if(num[1]=='n' && num[2]=='e') cout<<1<<endl;
				else cout<<2<<endl;
			}
		}
	}

	return 0;
}
                    

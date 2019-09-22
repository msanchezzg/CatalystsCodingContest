#include <iostream>
using namespace std;

int main(){

	int casos,fil,col,s;
	cin>>casos;

	for(;casos>0;casos--){
		cin>>fil>>col;
		fil-=2;
		col-=2;
		s=0;

		while(col>0){
			s+=(fil/3);
			if (fil%3!=0) s++;
			col-=3;
		}

		cout<<s<<endl;
	}        
	return 0;
}
                    

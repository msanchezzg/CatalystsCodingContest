#include <iostream>
#include <cmath>
using namespace std;

int main(){

	int a,b,total;

	while(cin>>a>>b && a!=-1){
		total=abs(a-b);
		if(total>100-total) total=100-total;
		cout<<total<<endl;
	}    
	return 0;
}
                    

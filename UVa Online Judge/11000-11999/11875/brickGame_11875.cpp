#include <iostream>
using namespace std;

int main(){

	int casos,a,n,j;
	cin>>casos;
	for(int i=1;i<=casos;i++){
		cin>>n;
		for(j=0;j<(n/2)+1;j++) cin>>a;

		cout<<"Case "<<i<<": "<<a<<endl;

		for(int k=0;k<(n-j);k++) cin>>a;
	}
	return 0;
}
                    

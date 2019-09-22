#include <iostream>
using namespace std;


int main(){

	int cases, n, k, p, i, res;
	cin>>cases;

	for(i=1; i<=cases; i++){
		cin>>n>>k>>p;
		res=(p+k)%n;
		if(res==0) res=n;
		
		cout<<"Case "<<i<<": "<<res<<'\n';
	}
	return 0;
}
                    

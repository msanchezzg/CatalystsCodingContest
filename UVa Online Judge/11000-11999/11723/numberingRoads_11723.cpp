#include <iostream>
using namespace std;

int main(){

   int i,r,n,a;
   i=1;

   while(cin>>r>>n && r){
   		if(r<=n) cout<<"Case "<<i<<": 0"<<endl;
   		else{
	   		r-=n;
	   		if(r%n==0) a=r/n;
	   		else a=r/n + 1;

	   		if(a<=26) cout<<"Case "<<i<<": "<<a<<endl;
	   		else cout<<"Case "<<i<<": impossible"<<endl;
	   	}

   		i++;
	} 
	return 0;
}
                    

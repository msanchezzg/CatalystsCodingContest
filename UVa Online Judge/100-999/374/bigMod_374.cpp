#include <iostream>
using namespace std;


long powmod(long base, long exp, long modulo){

	base%=modulo;
	long result=1;
	
	while(exp>0){
		if(exp&1) result=(result*base)%modulo;
		base=(base*base)%modulo;
		exp>>=1;
	}

	return result;		
}


int main(){

	long b;
	long p;
	long m;

	while(cin>>b>>p>>m){
		cout<<powmod(b,p,m)<<endl;
	}
        
    return 0;
}
                    

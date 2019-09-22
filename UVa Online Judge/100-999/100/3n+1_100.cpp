#include <iostream>
using namespace std;


int longitud_serie(int n){
	int longitud=1;

	while (n!=1){
		if (n%2!=0) n=3*n+1;
		else n=n/2;
		longitud++;
	}

	return longitud;
}

    
int main(){

	int n1,n2,long_max,longitud;

	while(cin>>n1>>n2){
		long_max=0;

		if (n1<n2){
			for (int i=n1;i<=n2;i++){
				longitud=longitud_serie(i);
				if (longitud > long_max) long_max=longitud;
			}
		}
		else{
			for (int i=n1;i>=n2;i--){
				longitud=longitud_serie(i);
				if (longitud > long_max) long_max=longitud;
			}
		}
		cout<<n1<<' '<<n2<<' '<<long_max<<endl;
    }
	
    return 0;
}


                

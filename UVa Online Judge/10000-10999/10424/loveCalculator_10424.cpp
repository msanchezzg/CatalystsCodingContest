#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int una_cifra(int n){
	if (n<10) return n;
	else{
		int x=0;
		while(n>=1){
			x+=n%10;
			n/=10;
		}
		return una_cifra(x);
	}
}

int alpha_to_value(char c){
	if(islower(c)) 	    return ((int)c-96);
	else if(isupper(c)) return ((int)c-64);
	else return 0;
}


int main(){
	string a, b;
	int i;
	double res, sum1, sum2;

	while(getline(cin,a) && getline(cin,b)){
		sum1=0;
		sum2=0;
		
		if(a.size() > b.size()){
			for(i=0;i<b.size();i++){
				sum1+=alpha_to_value(a[i]);
				sum2+=alpha_to_value(b[i]);
			}
			for(;i<a.size();i++) sum1+=alpha_to_value(a[i]);
		}

		else{
			for(i=0;i<a.size();i++){
				sum1+=alpha_to_value(a[i]);
				sum2+=alpha_to_value(b[i]);
			}
			for(;i<b.size();i++) sum2+=alpha_to_value(b[i]);
		}

		sum1=una_cifra(sum1);
		sum2=una_cifra(sum2);
		
		if(sum1>sum2)	res=sum2/sum1;
		else			res=sum1/sum2;	  
		
		res=round(res*10000)/100;
		printf("%.2lf %%\n",res);
	}
	return 0;
}
                    

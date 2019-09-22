#include <iostream>
using namespace std;

int main(){

    int casos,a,b,sum;
    cin>>casos;

    for(int i=1;i<=casos;i++){
    	cin>>a>>b;
    	sum=0;
    	if (a%2==0) a++;

    	for(int j=a;j<=b;j+=2) sum+=j;

    	cout<<"Case "<<i<<": "<<sum<<endl;
    }
	return 0;
}
                    

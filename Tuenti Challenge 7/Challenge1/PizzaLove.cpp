#include <iostream>
#include <cmath>
using namespace std;


int main(){

    int cases,num_p,slices,pizzas,t;
    cin>>cases;

    for(int i=1;i<=cases;i++){
    	cin>>num_p;
    	pizzas=0;
    	t=0;
    	for(int j=0;j<num_p;j++){
    		cin>>slices;
    		t+=slices;
    		if(t%8!=0) pizzas=(int)(ceil(t/8.0));
    		else pizzas=t/8;
    	}
    	cout<<"Case #"<<i<<": "<<pizzas<<endl;

    }    
    return 0;
}
                    

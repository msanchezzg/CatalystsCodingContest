#include <iostream>
using namespace std;

int main(){

	int cases, n1, n2, i, cont;
	bool order;
	i=0;
	cin>>cases;
	cout<<"Lumberjacks:"<<endl;

    for (i=0;i<cases;i++){
    	order=true;
    	cont=2;
    	cin>>n1>>n2;

    	if(n2>n1){
    		while(cont<10){
    			n1=n2;
    			cin>>n2;
    			if(n2 < n1) order=false;
    			cont++;
    		}
    	}

    	else{
    		while(cont<10){
    			n1=n2;
    			cin>>n2;
    			if(n2 > n1) order=false;
    			cont++;
    		}
    	}

    	if(order==true) cout<<"Ordered"<<endl;
    	else cout<<"Unordered"<<endl;
    }    

    return 0;
}
                    

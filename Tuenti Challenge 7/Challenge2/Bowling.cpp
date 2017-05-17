#include <iostream>
#include <vector>
using namespace std;


int main(){

    int cases,rolls,p,n,round;
    vector<int>pins;
    cin>>cases;

    for(int i=1;i<=cases;i++){
    	cin>>rolls;
    	pins.clear();
    	round=0;
    	p=0;
    	cout<<"Case #"<<i<<": ";

    	for(int j=0;j<rolls;j++){
    		cin>>n;
    		pins.push_back(n);
    	}

    	for(int k=0;k<rolls && round<10;k++){
			round++;
    		if(pins[k]==10){
    			p=p+10+pins[k+1]+pins[k+2];
    		}
    		else if(pins[k]+pins[k+1]==10){
    			p=p+10+pins[k+2];
    			k++;
    		}
    		else {
    			p=p+pins[k]+pins[k+1];
    			k++;
    		}	

    		if (round<10) cout<<p<<' ';
    		else cout<<p<<endl;
    	}
    }    
    return 0;
}
                    

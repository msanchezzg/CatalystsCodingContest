#include <iostream>
#include <vector>
using namespace std;


int sum_max(vector<int> v){

	int sum=0;
	for(int i=0;i<v.size();i++){
		sum+=v[i];
	}
	return sum;
}


int main(){

    int cases,n,j;
    vector<int>cards;    
    cin>>cases;

    for(int i=1;i<=cases;i++){
    	cards.clear();
    	cin>>n;
    	j=1;
    	while(j<=n) {
    		cards.push_back(j);	
			j=sum_max(cards)+1;
    	}

    	cout<<"Case #"<<i<<": "<<cards.size()<<endl;
    }
    return 0;
}
                    

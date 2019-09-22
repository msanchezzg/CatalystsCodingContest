#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    int freq,cases,fr_max;
    string web;
    vector<string> popular;    

    cin>>cases;
    for(int i=1;i<=cases;i++){
    	cout<<"Case #"<<i<<":"<<endl;
    	fr_max=0;
    	popular.clear();
    	for(int j=0;j<10;j++){
    		cin>>web>>freq;
    		if (freq>fr_max) {
    			fr_max=freq;
    			popular.clear();
    			popular.push_back(web);
    		}
    		else if(freq==fr_max) popular.push_back(web);
    	}
    	for(int j=0;j<popular.size();j++) cout<<popular[j]<<endl;
    }
	return 0;
}
                    

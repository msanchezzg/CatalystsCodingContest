#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

	int a,b,c;
	vector<int> v;

	while(cin>>a>>b>>c && a){
		v.clear();
		v.insert(v.end(),{a,b,c});
		sort(v.begin(),v.end());
		if(v[0]*v[0]+v[1]*v[1]==v[2]*v[2]) cout<<"right"<<endl;
		else cout<<"wrong"<<endl;
	}
	return 0;
}
                    

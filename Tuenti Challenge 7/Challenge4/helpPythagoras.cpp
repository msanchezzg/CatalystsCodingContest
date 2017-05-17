#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){

	int cases,sides;
	long long p,s;
	vector<long long>ss;
	cin>>cases;

	for(int i=1;i<=cases;i++){
		cin>>sides;
		p=12884901889;
		ss.clear();

		for(int j=0;j<sides;j++){
			cin>>s;
			ss.push_back(s);
		}
		
		sort(ss.begin(), ss.end());

		for(int j=0;j<sides;j++){
			for(int k=j+1;k<sides;k++){
				for(int l=k+1;l<sides;l++){
					if(ss[j]+ss[k]>ss[l] && ss[j]+ss[k]+ss[l]<p) p=ss[j]+ss[k]+ss[l];
					k++;
				}
			}
		}
		
		cout<<"Case #"<<i<<": ";
		if (p==12884901889)cout<<"IMPOSSIBLE"<<endl;
		else cout<<p<<endl;
	}
	return 0;
}
                    

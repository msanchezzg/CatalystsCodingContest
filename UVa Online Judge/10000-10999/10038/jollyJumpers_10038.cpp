#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

	int casos, a, max, min,  dif;
	vector<int> v, repetidos;
	bool jolly;

	while(cin>>casos) {
		v.clear();
		repetidos.clear();
		cin>>a;
		v.push_back(a);
		max=casos-1;
		min=1;
		jolly=true;

		for(int i=1; i<casos; i++){
			cin>>a;
			v.push_back(a);
		}

		for(int i=0;i<casos-1;i++){
			dif=abs(v[i]-v[i+1]);
			if(dif<min || dif>max) {
				jolly=false;
				break;
			}
			else if(find(repetidos.begin(), repetidos.end(), dif)!=repetidos.end()) {
				jolly=false;
				break;
			}
			else repetidos.push_back(dif);
		}

		if(jolly) cout<<"Jolly\n";
		else cout<<"Not jolly\n";

	}

	return 0;
}
                    

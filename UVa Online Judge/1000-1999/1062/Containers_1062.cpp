#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

	string cont;
	int p,i=1;
	bool addp;
	vector<char> v;
	cin>>cont;

	while(cont[0]!='e'){
		v.clear();
		v.push_back(cont[0]);
		p=1;
		
		for(int j=1;j<cont.size();j++){
			addp=true;
			for(int k=0;k<p && addp==true;k++){
				if (cont[j]<=v[k]) {
					v[k]=cont[j];
					addp=false;
				}	
			}
			if (addp==true){
				v.push_back(cont[j]);
				p++;
			}
		}
		cout<<"Case "<<i<<": "<<p<<endl;
		cin>>cont;
		i++;
	}
	return 0;
}
                    

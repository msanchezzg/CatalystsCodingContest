#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int mediana(vector<int> v){	//devuelve la mediana de una serie de números
	int tam=v.size();
	if (tam%2!=0) return v[(tam/2)];
	else{
		unsigned int a=(v[(tam/2)]+v[(tam/2)-1]);
		return(a/2);
	}
}


int main(){

	int n;
	vector<int> v;

	while(cin>>n){
		/*if (vec.size()==0) vec.push_back(n);
		else{*/
		//vec.insert(vec.find_if(vec.begin(), vec.end(), menor_o_igual())ss,nss);
		/*
		for(int i=0;i<vec.size() && menor)
		vec.insert(vec.find(vec.begin(), vec.end(), ),n);
		*/
		v.push_back(n);
		sort(v.begin(),v.end());
		cout<<mediana(v)<<endl;
	}
	return 0;
}
                    

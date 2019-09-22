#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(){

	int fil, min, total, s;
	string col;
	vector<int> espacios;

	while(cin>>fil && fil){
		cin.ignore();
		min = 25;
		espacios.clear();
		total = 0;

		while(fil--){
			getline(cin,col);
			s = count(col.begin(),col.end(),' ');
			espacios.push_back(s);
			if(s < min) min = s;
		}
		
		for(int i=0; i<espacios.size(); i++){
			total += espacios[i] - min;
		}

		cout<<total<<'\n';
	}
	
	return 0;
}
                    

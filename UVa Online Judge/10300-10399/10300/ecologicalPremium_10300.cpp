#include <iostream>
using namespace std;


int main(){

	int cases, farmers, size_farm, animals, env;
	long long total;
	cin>>cases;

	for(int i=0;i<cases;i++){
		total=0;
		cin>>farmers;
		for(int j=0;j<farmers;j++){
			cin>>size_farm>>animals>>env;
			if(animals!=0) {
				total+=((unsigned long)size_farm)*env;
			}	
		}
		cout<<total<<endl;
	}
        
    return 0;
}
                    

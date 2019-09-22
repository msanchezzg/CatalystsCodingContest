#include <iostream>
using namespace std;


int main(){

	int casos, num_estud, velocidad, v_max;
	cin>>casos;

	for(int i=1;i<=casos;i++){
		v_max=0;
		cin>>num_estud;
		
		for(int j=0;j<num_estud;j++){
			cin>>velocidad;
			if(velocidad>v_max) v_max=velocidad;
		}
		cout<<"Case "<<i<<": "<<v_max<<endl;
	}         
    return 0;
}
                    

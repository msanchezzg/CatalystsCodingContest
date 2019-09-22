#include <iostream>
using namespace std;

int main(){

	int num_casos, caso,i,resultado;
	i=0;

	while(cin>>num_casos &&num_casos){
		i++;
		resultado=0;
		for(int a=0;a<num_casos;a++){
			cin>>caso;
			if(caso>0 && caso<=99) resultado++;
			else resultado--;
		}

		cout<<"Case "<<i<<": "<<resultado<<endl;
	}

    return 0;
}
                    

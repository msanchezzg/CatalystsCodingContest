#include <iostream>
#include <string>
using namespace std;


int main(){

	int total,donacion,casos,i;
	total=0;
	i=0;
	string entrada;
	cin>>casos;

    while(i<casos){
    	i++;
    	cin>>entrada;
    	if (entrada.compare("report")==0) cout<<total<<endl;
    	else{
    		cin>>donacion;
    		total+=donacion;
    	}
    }   

    return 0;
}
                    

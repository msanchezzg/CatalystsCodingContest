#include <iostream>
#include <vector> 
using namespace std;


int main(){

	int distancia,num_tiendas,tienda,minimo,maximo;
	vector <int> tiendas;
	cin>>num_tiendas;
	
	while(cin>>num_tiendas){
		distancia=0;
		minimo=99;
		maximo=0;
		tiendas.clear();

	   	for(int i=0;i<num_tiendas;i++){
			cin>>tienda;
			if(tienda<minimo) minimo=tienda;
			if(tienda>maximo) maximo=tienda;
	   		tiendas.push_back(tienda);
	   	}

	   	distancia=maximo-minimo;
	   	cout<<distancia*2<<endl;
	}	

	return 0;
}
                    

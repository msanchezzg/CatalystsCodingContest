#include <iostream>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main(){

        int num_vagones,vagon,k;
        bool orden=true;

       	while(cin>>num_vagones && num_vagones){
       		while(cin>>vagon && vagon){

	       		stack <int> pila_vagones;
	       		queue<int> tren_inicial;
	       		vector<int> salida;

	       		salida.push_back(vagon);

       			for(int i=1;i<num_vagones;i++){		//Salida (fichero)
       			cin>>vagon;
       			salida.push_back(vagon);
       			}

	       		for(int j=1;j<=num_vagones;j++){	//Llenamos el tren inicial de 1...n
	       			tren_inicial.push(j);
	       		}

	       		k=0;
	       		while(k<num_vagones && tren_inicial.empty()==false){
	       			pila_vagones.push(tren_inicial.front());

		       			while (pila_vagones.empty()==false && pila_vagones.top()==salida[k]){
		       				pila_vagones.pop();
		       				k++;
		       			}
		       			tren_inicial.pop();
		       			
	       		}

	       		if (pila_vagones.empty()==true) cout<<"Yes"<<endl;
	       		else cout<<"No"<<endl;

       		}
       		
       		cout<<'\n';
       	}        

        return 0;
}
                    

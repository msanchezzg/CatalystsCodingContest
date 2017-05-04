#include <iostream>
#include <queue>
using namespace std;


int main(){

	int entrada, cont;

	while(cin>>entrada && entrada){
		queue<int> cartas;
		cont=0;

		for(int i=1;i<=entrada;i++) cartas.push(i);

		if(cartas.size()==1) cout<<"Discarded cards:\nRemaining card: 1"<<endl;
		else{
			cout<<"Discarded cards: ";

			while (cartas.size()>1){
				if (cont%2==0){
					if(cartas.size()==2) cout<<cartas.front();
					else cout<<cartas.front()<<", ";
				} 
				else {
					cartas.push(cartas.front());
				}

				cartas.pop();
				cont++;
			}
			
			cout<<"\nRemaining card: "<<cartas.front()<<endl;	
		}	
	}

    return 0;
}
                    

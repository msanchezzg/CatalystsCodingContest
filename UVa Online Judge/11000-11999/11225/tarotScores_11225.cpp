#include <iostream>
#include <string>
using namespace std;

int main(){

	int casos,n,obj,oud;
	double puntos;
	string carta;

	cin>>casos;
	for(int i=1;i<=casos;i++){
		cin>>n;
		cin.ignore();
		puntos=0.0;
		oud=0;
		
		for(;n>0;n--){
			getline(cin,carta);

			if (carta[0]=='k'){
				if (carta[1]=='i') puntos+=4.5;
				else puntos+=2.5;
			}
			else if (carta[0]=='q') puntos+=3.5;
			else if (carta[0]=='j') puntos+=1.5;
			else if (carta.compare("fool")==0){
				puntos+=4.5;
				oud++;
			}
			else if (carta[0]=='o') {
				puntos+=4.5;
				oud++;
			}
			else if (carta[6]=='-'){
				puntos+=4.5;
				oud++;
			}
			else puntos+=0.5;
		}

		switch(oud){
				case 0: {
					obj=56;
					break;
				}
				case 1: {
					obj=51;
					break;
				}
				case 2: {
					obj=41;
					break;
				}
				case 3: {
					obj=36;
					break;
				}	
			}

		cout<<"Hand #"<<i<<endl;
		if (obj>puntos) cout<<"Game lost by "<<obj-puntos<<" point(s)."<<endl;
		else 			cout<<"Game won by "<<puntos-obj<<" point(s)."<<endl;
		if (i<casos) cout<<'\n';
	}
	return 0;
}
                    
